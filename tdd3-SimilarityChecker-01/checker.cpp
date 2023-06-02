#include <string>
#include <vector>

using namespace std;

const int MAX_SCORE_LENGTH = 60;
const int SCORE_DOUBLE_LENGTH = 0;

class SimilarityChecker
{
public:
	bool isDoubleLength(int len1, int len2)
	{
		return len1 >= len2 * 2 || len2 >= len1 * 2;
	}

	int getScoreWithLength(const string& input1, const std::string& input2)
	{
		int len1 = input1.length();
		int len2 = input2.length();

		if (len1 == len2)
		{
			return MAX_SCORE_LENGTH;
		}

		if (isDoubleLength(len1, len2))
		{
			return SCORE_DOUBLE_LENGTH;
		}

		double result = 0;
		if (len1 > len2 )
		{
			int gap = len1 - len2;
			double gapDivide = static_cast<double>(gap) / static_cast<double>(len2);
			result = (1 - gapDivide) * MAX_SCORE_LENGTH;
			
		}

		return static_cast<int> (result);
	}
};