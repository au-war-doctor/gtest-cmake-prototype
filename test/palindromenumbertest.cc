#include "palindromenumber.h"
#include <gtest/gtest.h>


TEST(Palindrome, BadNumberFails) {
    int const badnum = 75347;
    int const ret = mine::palindromenumber(badnum);
    EXPECT_NE(ret, 0);
}

TEST(Palindrome, GoodNumberPasses) {
    int const goodnum = 75357;
    int const ret = mine::palindromenumber(goodnum);
    EXPECT_EQ(ret, 0);
}

TEST(Palindrome, EvenNumberPalindrome) {
    int const even = 7557;
    int const ret = mine::palindromenumber(even);
    EXPECT_EQ(ret, 0);
}

// this reverses the string, so single-chars will actually work
TEST(Palindrome, SingleNumberPalindrome) {
    int const single = 1;
    int const ret = mine::palindromenumber(single);
    EXPECT_EQ(ret, 0);
}
