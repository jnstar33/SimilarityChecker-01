#include "pch.h"
#include "../tdd3-SimilarityChecker-01/checker.cpp"

TEST(SimilarityChecker, compareStringLength01) {
	string input1 = "ASD";
	string input2 = "DSA";
	int result = SimilarityChecker().getScoreWithLength(input1, input2);
	EXPECT_EQ(60, result);
}

TEST(SimilarityChecker, compareStringLength02) {
	string input1 = "A";
	string input2 = "BB";
	int result = SimilarityChecker().getScoreWithLength(input1, input2);
	EXPECT_EQ(0, result);
}
