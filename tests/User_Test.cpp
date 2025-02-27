#include <gtest/gtest.h>
#include "User.hpp"

TEST(UserTest, SubtractTest) {
    EXPECT_EQ(User::subtract(-10, 0), -10);
    EXPECT_EQ(User::subtract(5, -3), 8);
    EXPECT_EQ(User::subtract(12, -7), 19);
    EXPECT_EQ(User::subtract(20, 8), 12);
    EXPECT_EQ(User::subtract(-15, 30), -45);
}
