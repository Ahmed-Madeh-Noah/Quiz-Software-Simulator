#include <gtest/gtest.h>
#include "UserDB.hpp"

TEST(UserDBTest, MultiplyTest) {
    EXPECT_EQ(UserDB::multiply(-10, 0), 0);
    EXPECT_EQ(UserDB::multiply(5, -3), -15);
    EXPECT_EQ(UserDB::multiply(12, -7), -84);
    EXPECT_EQ(UserDB::multiply(20, 8), 160);
    EXPECT_EQ(UserDB::multiply(-15, 30), -450);
}
