#include <gtest/gtest.h>
#include "Session.h"

TEST(SessionTest, AddTest) {
  Session session;
    EXPECT_EQ(session.add(2, 3), 5);
    EXPECT_EQ(session.add(-1, 1), 0);
    EXPECT_EQ(session.add(0, 0), 0);
}
