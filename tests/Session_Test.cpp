#include <gtest/gtest.h>
#include "Session.h"

TEST(SessionTest, AddTest) {
    EXPECT_EQ(Session::add(2, 3), 5);
    EXPECT_EQ(Session::add(-1, 1), 0);
    EXPECT_EQ(Session::add(0, 0), 0);
}
