#include <gtest/gtest.h>
#include "QuizDB.hpp"

TEST(QuizDBTest, MultiplyTest) {
    EXPECT_EQ(QuizDB::multiply(-10, 0), 0);
    EXPECT_EQ(QuizDB::multiply(5, -3), -15);
    EXPECT_EQ(QuizDB::multiply(12, -7), -84);
    EXPECT_EQ(QuizDB::multiply(20, 8), 160);
    EXPECT_EQ(QuizDB::multiply(-15, 30), -450);
}
