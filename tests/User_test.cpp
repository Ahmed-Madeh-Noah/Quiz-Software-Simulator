#include <gtest/gtest.h>
#include <User.hpp>

TEST(add, Negative) {
    EXPECT_EQ(User::add(-6, -10), -16);
    EXPECT_EQ(User::add(-2, 0), -2);
    EXPECT_EQ(User::add(-4, 9), 5);
}

TEST(add, Zero) {
    EXPECT_EQ(User::add(0, -3), -3);
    EXPECT_EQ(User::add(0, 0), 0);
    EXPECT_EQ(User::add(0, 2), 2);
}


TEST(add, Positive) {
    EXPECT_EQ(User::add(6, -10), -4);
    EXPECT_EQ(User::add(3, 0), 3);
    EXPECT_EQ(User::add(8, 2), 10);
}

TEST(is_empty_or_whitespace, Empty) {
    EXPECT_TRUE(User::is_empty_or_whitespace(""));
}

TEST(is_empty_or_whitespace, SpecialCharacters) {
    EXPECT_TRUE(User::is_empty_or_whitespace(" "));
    EXPECT_TRUE(User::is_empty_or_whitespace("\t"));
    EXPECT_TRUE(User::is_empty_or_whitespace("\n"));
}

TEST(is_empty_or_whitespace, SpecialCharactersCobinations) {
    EXPECT_TRUE(User::is_empty_or_whitespace(" \t\n"));
    EXPECT_TRUE(User::is_empty_or_whitespace(" \t"));
    EXPECT_TRUE(User::is_empty_or_whitespace(" \n"));
    EXPECT_TRUE(User::is_empty_or_whitespace("\t\n"));
    EXPECT_TRUE(User::is_empty_or_whitespace("  "));
    EXPECT_TRUE(User::is_empty_or_whitespace("\t\t"));
    EXPECT_TRUE(User::is_empty_or_whitespace("\n\n"));
}

TEST(is_empty_or_whitespace, RegularCharacters) {
    EXPECT_FALSE(User::is_empty_or_whitespace("a"));
    EXPECT_FALSE(User::is_empty_or_whitespace("A"));
    EXPECT_FALSE(User::is_empty_or_whitespace("0"));
    EXPECT_FALSE(User::is_empty_or_whitespace("!"));
}

TEST(is_empty_or_whitespace, CharacterMix) {
    EXPECT_FALSE(User::is_empty_or_whitespace(" a"));
    EXPECT_FALSE(User::is_empty_or_whitespace("a "));
    EXPECT_FALSE(User::is_empty_or_whitespace("\ta"));
    EXPECT_FALSE(User::is_empty_or_whitespace("a\t"));
    EXPECT_FALSE(User::is_empty_or_whitespace("\na"));
    EXPECT_FALSE(User::is_empty_or_whitespace("a\n"));
}
