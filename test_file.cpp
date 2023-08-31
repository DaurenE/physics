#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <iostream>
#include <sstream>
#include "physics_for_7.cpp"

using namespace testing;

class MechanicalWorkTest : public ::testing::Test {
protected:
    void SetUp() override {
        // Подготовка для каждого тестового случая
        ::testing::internal::CaptureStdout(); // Захватывает стандартный вывод
    }

    void TearDown() override {
        // Очистка после каждого тестового случая
        ::testing::internal::GetCapturedStdout(); // Получает захваченный вывод
    }
};

class MockInputStream : public IInputStream {
public:
    MOCK_METHOD(std::string, GetLine, (), (override));
};

TEST_F(MechanicalWorkTest, TestA) {
    // Создание мок-объекта для эмуляции ввода
    MockInputStream mockInput;
    EXPECT_CALL(mockInput, GetLine())
        .WillOnce(Return("A"))
        .WillOnce(Return("5 2"));

    // Подготовка данных для ожидаемого вывода
    std::string expected_output = "A = 2.5[Дж]\n";

    // Перенаправление ввода и вывода
    ::testing::internal::CaptureStdin();
    ::testing::internal::CaptureStdout();

    // Заменяем стандартный поток ввода на мок-объект
    SetInputStream(&mockInput);

    // Вызываем функцию
    mechanical_work();

    // Получаем захваченный вывод
    std::string actual_output = ::testing::internal::GetCapturedStdout();

    // Сравниваем ожидаемый и фактический вывод
    EXPECT_EQ(expected_output, actual_output);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}
