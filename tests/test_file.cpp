#include <gtest/gtest.h>
#include "physics_for_7.cpp"

TEST(mech_work, TestCase1) {
        void mechanical_work() {
        float A, N, t, F, V;
        string unknown;

        cout << "Введите неизвестный параметр (A, N, t): " << '\n';
        cin >> unknown;
        if (unknown == "A") {
            cout << "Введите N, t: ";
            cin >> N >> t;
            cout << "A = " << N/t << "[Дж]" << '\n';
        } else if (unknown == "N") {
            cout << "Введите A, t: ";
            cin >> A >> t;
            cout << "N = " << A/t << "[Вт]" << '\n';
        } else if (unknown == "t") {
            cout << "Введите A, N: ";
            cin >> A >> N;
            cout << "t = " << N/A << "[сек]" << '\n';
        } else {
            cout << "Error" << '\n';
        }
    };
}

TEST(MyTestSuit, TestCase2) {
    EXPECT_TRUE(true);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}