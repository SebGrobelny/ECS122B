#include "BoyerMoorePreprocessing.h"
#include "gtest/gtest.h"

using testing::Test;

// Unit tests for BoyerMoorePreprocessing. Because unit tests are a first line
// of defense, ideally, each test should:
//  1) Be deterministic (For consistent results)
//  2) Test exactly one thing (To quickly diagnose bugs)
//  3) Run quickly, ex. ~0-1ms per test (To minimize overhead while compiling with make)

// Testing L' calculation with string P = " cabdabdab", P.20 Gusfield
TEST(CalculateCapitalLprimeTest, GusfieldExamplePageTwenty) {
  // TODO: Implement this. Check the entire L' vector
}

// Testing L' calculation with string P = " dabcdbdab"
TEST(CalculateLowercaseLprimeTest, Pattern_dabcdbdab) {
  // TODO: Implement this. Check the entire L' vector
}

// Testing N calculation with string P = " cabdabdab", p. 21 Gusfield
TEST(CalculateNTest, GusfieldExamplePageTwentyOne) {
  // TODO: Implement this. Check only values given in the text
}

// Testing R calculation with an empty pattern P
TEST(CalculateRTest, EmptyPattern) {
  // TODO: Implement this
}

// Testing R calculation with a pattern P that is a single character
TEST(CalculateRTest, SingleCharacterPattern) {
  // TODO: Implement this
}

// Testing R calculation with a pattern P that has at least 
//  one character that appears two or more times
TEST(CalculateRTest, RepeatedCharacterPattern) {
  // TODO: Implement this
}

int main(int argc, char** argv) {
   testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TESTS();
}