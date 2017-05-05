#include "Zalgorithm.h"
#include "gtest/gtest.h"

#include <string>

using testing::Test;

// Testing MatchLength calculation when no matches occur
TEST(MatchLengthTest, NoMatchTest) {
  
  bool checker = true;
  if (MatchLength(const std::string& S, int i, int j) < 1) {
  	checker = false;
  }

  EXPECT_EQ(checker,false);
}

// Testing MatchLength calculation when geginning of string matches
TEST(MatchLengthTest, BeginningStringMatch) {
  
  bool checker = false;
  if (MatchLength(const std::string& S, int i, int j) == 1) {
  	checker = true;
  }

  EXPECT_EQ(checker, true);
}

// Testing MatchLength calculation when middle of the string matches
TEST(MatchLengthTest, MidStringMatch) {

  bool checker = false;

  if (S.length() % 2 !=0 && (S.length()/2+1 == MatchLength(const std::string& S, int i, int j))) {
  	checker = true;
  }		

  EXPECT_EQ(checker, true);
}

// Testing MatchLength calculation when match stops at end of string
TEST(MatchLengthTest, EndOfStringMatch) {

  bool checker = false;

  if (S.length() == MatchLength(const std::string& S, int i, int j)) {
  	checker = true;
  }	

  EXPECT_EQ(checker, true);
}

// Testing Zalgorithm calculation with string S = " aabcaabxaaz", p.7 Gusfield
TEST(ZalgorithmTest, GusfieldExamplePageSeven) {
  std::list<int>* Z;
  std::string S = " aabcaabxaaz";
  int[] CheckArray = [1,0,0,3,1,0,0,2,2,1,0],
  int count;
  int i = 0;
  bool checker = false;	
  Zalgorithm(S, Z);
  std::list<int>*::iterator it;

  for (it = Z.begin(); it != Z.end();it++) {
  	if (checkArray[i] == *it) {
  		count++;
  	}
  	i++;
  }
  if (count == Z.length()) {
  	checker = true;
  }

  EXPECT_EQ(checker, true);
}

int main(int argc, char** argv) {
   testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TESTS();
}