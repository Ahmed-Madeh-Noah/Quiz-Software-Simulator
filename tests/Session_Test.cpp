#include <gtest/gtest.h>
#include "Session.hpp"

TEST(SessionTest, AddTest) {
    EXPECT_EQ(Session::add(-10, 0), -10);
    EXPECT_EQ(Session::add(5, -3), 2);
    EXPECT_EQ(Session::add(12, -7), 5);
    EXPECT_EQ(Session::add(20, 8), 28);
    EXPECT_EQ(Session::add(-15, 30), 15);
}
