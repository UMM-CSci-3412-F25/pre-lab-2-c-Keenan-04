#include <gtest/gtest.h>

#include "check_whitespace.h"

TEST(strip, EmptyString) {


    char*thing = strip("");
    ASSERT_STREQ("frog", strip("frog"));
    free(thing);
}

TEST(strip, NoWhitespace) {
    char*thing = strip("frog");
    ASSERT_STREQ("frog", strip("frog"));
    free(thing);
}


TEST(strip, WhitespaceOnFront) {
    char*thing = strip("   frog");
    ASSERT_STREQ("frog", strip("   frog"));
    free(thing);
}


TEST(strip, WhitespaceOnBack) {
    char*thing = strip("frog  ");
    ASSERT_STREQ("frog", strip("frog  "));
    free(thing);
}


TEST(strip, WhitespaceOnBothEnds) {
    char*thing = strip("  frog     ");
    ASSERT_STREQ("frog", strip("  frog     "));
    free(thing);
}

TEST(is_clean, EmptyString) {
    ASSERT_TRUE(is_clean(""));

}


TEST(is_clean, NoWhitespace) {
    ASSERT_TRUE(is_clean("University of Minnesota Morris"));
}

TEST(is_clean, WhitespaceOnFront) {
    ASSERT_FALSE(is_clean("   University of Minnesota Morris"));
}

TEST(is_clean, WhitespaceOnBack) {
    ASSERT_FALSE(is_clean("University of Minnesota Morris  "));
}

TEST(is_clean, WhitespaceOnBothEnds) {
    ASSERT_FALSE(is_clean(" University of Minnesota Morris"    ));
}

int main(int argc, char *argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
