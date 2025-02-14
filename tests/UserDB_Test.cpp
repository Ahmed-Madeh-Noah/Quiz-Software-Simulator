#include <gtest/gtest.h>
#include "UserDB.hpp"

TEST(UserDBTest, MultiplyTest) {
    EXPECT_EQ(UserDB::multiply(2, 3), 6);
    EXPECT_EQ(UserDB::multiply(-4, 5), -20);
    EXPECT_EQ(UserDB::multiply(0, 10), 0);
}
