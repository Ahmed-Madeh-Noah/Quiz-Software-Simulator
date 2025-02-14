#include <gtest/gtest.h>
#include "QuizDB.hpp"

TEST(QuizDBTest, ModuloTest) {
    EXPECT_EQ(QuizDB::modulo(10, 3), 1);
    EXPECT_EQ(QuizDB::modulo(20, 7), 6);
    EXPECT_EQ(QuizDB::modulo(-10, 3), -1);
}
