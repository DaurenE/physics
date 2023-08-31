#include <gtest/gtest.h>

TEST(MyTestSuit, TestCase1) {
    EXPECT_EQ(2 + 2, 4);
}

TEST(MyTestSuit, TestCase2) {
    EXPECT_TRUE(true);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}