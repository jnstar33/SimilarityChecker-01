#include <string>
#include <vector>

using namespace std;

const int MAX_SCORE_LENGTH = 60;
const int SCORE_DOUBLE_LENGTH = 0;

class SimilarityChecker
{
public:
	SimilarityChecker(const string& input1, const string& input2)
		: input1(input1),
		  input2(input2)
	{
		inputLen1 = input1.length();
		inputLen2 = input2.length();
	}

	int getScoreWithLength()
	{
		if (isSameLenth()) return MAX_SCORE_LENGTH;
		if (isDoubleLength())	return SCORE_DOUBLE_LENGTH;
		return calculateScoreWithLenghth();
	}

	bool isSameLenth()
	{
		return inputLen1 == inputLen2;
	}

	bool isDoubleLength()
	{
		int minLength = std::min(inputLen1, inputLen2);
		int maxLength = std::max(inputLen1, inputLen2);
		double ratio = static_cast<double>(maxLength) / minLength;
		return ratio >= 2.0;
	}

	int calculateScoreWithLenghth()
	{
		double result = 0;
		int gap = std::abs(inputLen1 - inputLen2);

		double gapDivide = static_cast<double>(gap) / static_cast<double>(std::min(inputLen1, inputLen2));
		result = (1 - gapDivide) * MAX_SCORE_LENGTH;

		return static_cast<int>(result);
	}

private:
	string input1;
	string input2;
	int inputLen1;
	int inputLen2;
};