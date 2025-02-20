#include <gtest/gtest.h>
#include "Database.hpp"

TEST(DatabaseTest, DivideTest) {
    EXPECT_EQ(Database::divide(6, 3), 2);
    EXPECT_EQ(Database::divide(10, -2), -5);
    EXPECT_EQ(Database::divide(0, 5), 0);
}
