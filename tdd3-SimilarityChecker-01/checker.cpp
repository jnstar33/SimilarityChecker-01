#include <string>
#include <vector>

using namespace std;

const int MAX_SCORE_LENGTH = 60;

class SimilarityChecker
{
public:
	int getScoreWithLength(const string& input1, const std::string& input2)
	{
		int len1 = input1.length();
		int len2 = input2.length();

		if (len1 == len2)
		{
			return MAX_SCORE_LENGTH;
		}

		return 0;
	}
};