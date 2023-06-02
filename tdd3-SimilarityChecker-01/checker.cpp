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
		input1Length = input1.length();
		input2Length = input2.length();
	}

	int getScoreWithLength()
	{
		if (isSameLenth()) return MAX_SCORE_LENGTH;
		if (isDoubleLength())	return SCORE_DOUBLE_LENGTH;
		return calculateScoreWithLenghth();
	}

private:
	bool isSameLenth()
	{
		return input1Length == input2Length;
	}

	bool isDoubleLength()
	{
		int minLength = std::min(input1Length, input2Length);
		int maxLength = std::max(input1Length, input2Length);
		double ratio = static_cast<double>(maxLength) / minLength;
		return ratio >= 2.0;
	}

	int calculateScoreWithLenghth()
	{
		double result = 0;
		int gap = std::abs(input1Length - input2Length);

		double gapDivide = static_cast<double>(gap) / static_cast<double>(std::min(input1Length, input2Length));
		result = (1 - gapDivide) * MAX_SCORE_LENGTH;

		return static_cast<int>(result);
	}

private:
	string input1;
	string input2;
	int input1Length;
	int input2Length;
};