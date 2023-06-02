#include "pch.h"
#include "../tdd3-SimilarityChecker-01/checker.cpp"

TEST(SimilarityChecker, getScoreWithLength01) {
	SimilarityChecker checker("ASD", "DSA");
	EXPECT_EQ(60, checker.getScoreWithLength());
}

TEST(SimilarityChecker, getScoreWithLength02) {
	SimilarityChecker checker("A", "BB");
	EXPECT_EQ(0, checker.getScoreWithLength());
}

TEST(SimilarityChecker, getScoreWithLength03) {
	SimilarityChecker checker("AAABB", "BAA");
	EXPECT_EQ(20, checker.getScoreWithLength());
}

TEST(SimilarityChecker, getScoreWithLength04) {
	SimilarityChecker checker("BAA", "AAABB");
	EXPECT_EQ(20, checker.getScoreWithLength());
}
