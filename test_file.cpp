#include <gtest/gtest.h>
#include <iostream>
#include <sstream>
#include "physics_for_7.cpp"

class MechanicalWorkTest : public ::testing::Test {
protected:
    void SetUp() override {
        // Подготовка для каждого тестового случая
        original_cin = std::cin.rdbuf(); // Сохраняем оригинальный stdin
        input_stream.str(""); // Очищаем input_stream
    }

    void TearDown() override {
        // Очистка после каждого тестового случая
        std::cin.rdbuf(original_cin); // Восстанавливаем оригинальный stdin
    }

    std::streambuf* original_cin;
    std::stringstream input_stream;
};

TEST_F(MechanicalWorkTest, TestA) {
    // Подготовка данных для ввода
    input_stream.str("A\n5 2\n"); // Ввод "A", затем "5 2"
    std::cin.rdbuf(input_stream.rdbuf()); // Перенаправляем stdin на input_stream

    // Подготовка данных для ожидаемого вывода
    std::string expected_output = "A = 2.5[Дж]\n";

    ::testing::internal::CaptureStdout(); // Захватывает стандартный вывод

    // Вызываем функцию
    mechanical_work();

    // Получаем захваченный вывод
    std::string actual_output = ::testing::internal::GetCapturedStdout();

    // Сравниваем ожидаемый и фактический вывод
    EXPECT_EQ(expected_output, actual_output);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
