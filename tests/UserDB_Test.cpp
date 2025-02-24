#include <gtest/gtest.h>
#include "UserDB.hpp"

TEST(UserDBTest, SubtractTest) {
    EXPECT_EQ(UserDB::subtract(-10, 0), -10);
    EXPECT_EQ(UserDB::subtract(5, -3), 8);
    EXPECT_EQ(UserDB::subtract(12, -7), 19);
    EXPECT_EQ(UserDB::subtract(20, 8), 12);
    EXPECT_EQ(UserDB::subtract(-15, 30), -45);
}
