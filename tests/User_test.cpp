#include <gtest/gtest.h>
#include <User.hpp>

TEST(add, Negative) {
    EXPECT_EQ(User::add(-6, -10), -16);
    EXPECT_EQ(User::add(-2, 0), -2);
    EXPECT_EQ(User::add(-4, 9), 5);
}

TEST(add, Zero) {
    EXPECT_EQ(User::add(0, -3), -3);
    EXPECT_EQ(User::add(0, 0), 0);
    EXPECT_EQ(User::add(0, 2), 2);
}


TEST(add, Positive) {
    EXPECT_EQ(User::add(6, -10), -4);
    EXPECT_EQ(User::add(3, 0), 3);
    EXPECT_EQ(User::add(8, 2), 10);
}
