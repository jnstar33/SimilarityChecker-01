#include "pch.h"
#include "../tdd3-SimilarityChecker-01/checker.cpp"

TEST(SimilarityChecker, compareStringLength01) {
	string input1 = "ASD";
	string input2 = "DSA";
	int result = SimilarityChecker().getScoreWithLength(input1, input2);
	EXPECT_EQ(100, result);
}

