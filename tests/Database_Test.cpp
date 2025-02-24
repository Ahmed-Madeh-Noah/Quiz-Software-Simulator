#include <gtest/gtest.h>
#include "Database.hpp"

TEST(DatabaseTest, DivideTest) {
    EXPECT_EQ(Database::divide(-10, 0), 0);
    EXPECT_EQ(Database::divide(5, -3), -1);
    EXPECT_EQ(Database::divide(12, -7), -1);
    EXPECT_EQ(Database::divide(20, 8), 2);
    EXPECT_EQ(Database::divide(-15, 30), 0);
}
