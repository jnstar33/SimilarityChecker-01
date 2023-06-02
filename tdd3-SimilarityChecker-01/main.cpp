#include <iostream>
//#include "../tdd3-SimilarityChecker-01/checker.cpp"
#include "checker.cpp"
int main()
{
	string input1 = "AAABB";
	string input2 = "BAA";
	int result = SimilarityChecker().getScoreWithLength(input1, input2);
	return 0;
}