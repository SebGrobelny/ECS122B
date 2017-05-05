#include "Zalgorithm.h"
#include "gtest/gtest.h"

using testing::Test;

#include <algorithm>
#include <random>
#include <string>

#define NUM_TEST_CASES 10000
#define RANDOM_STRING_SIZE 100

// Sanity check for ZalgorithmBasedMatching.
// Does NUM_TEST_CASES times:
//    1) Generate random string T of size RANDOM_STRING_SIZE
//    2) Generate a random substring P of T
//    3) Runs ZalgorithmBasedMatching and checks there is at least one match
// Use <random> & uniform_int_distribution for your random number generation
TEST(ZalgorithmSanityCheck, SubstringMatchesInRandomString) {
	int RANDOM_STRING_SIZE;
	int pos1,pos2;
	std::string P;
	std::list<int>* matches;

	std::string T = " ";
	T = rand()%10+1;
	static const char alphanum[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
	for (int i = 0; i < RANDOM_STRING_SIZE; i++) {
		T = T+alphanum[rand() % (sizeof(alphanum) - 1)];
	}
	pos1 = rand()%(T.length());
	pos2 = rand()%(T.length());
	if (pos2 > pos1) {
		P = T.substr(pos1,pos2);
	}
	else {
		P = T.substr(pos2,pos1);
	}

	ZalgorithmBasedMatching(P,T,matches);

}

int main(int argc, char** argv) {
   testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TESTS();
}