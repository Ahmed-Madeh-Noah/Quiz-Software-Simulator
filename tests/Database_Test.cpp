#include <gtest/gtest.h>
#include "Database.hpp"

TEST(UserDBTest, MultiplyTest) {
    EXPECT_EQ(Database::divide(6, 3), 2);
    EXPECT_EQ(Database::divide(10, -2), -5);
    EXPECT_EQ(Database::divide(-15, -5), 3);
}
