#include <iostream>
#include <map>
#include <cmath>
using namespace std;

int main()
{
	map<int, int> numbers;

	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int input;
		scanf("%d", &input);

		numbers[input]++;
	}

	int sum = 0;
	int mid = 0;
	int modeVal = 0, modeCount = 0, modeOverlap = 0;
	int count = 0;
	for (auto it = numbers.begin(); it != numbers.end(); it++)
	{
		for (int i = 0; i < (*it).second; i++)
		{
			count++;
			if (count == n / 2 + 1)
			{
				mid = (*it).first;
			}
			sum += (*it).first;
		}

		if (modeCount <= (*it).second)
		{
			modeOverlap = modeCount == (*it).second ? modeOverlap + 1 : 0;
			if (modeOverlap < 2)
			{
				modeVal = (*it).first;
				modeCount = (*it).second;
			}
		}
	}

	int min = (*numbers.begin()).first;
	int max = (*--numbers.end()).first;

	printf("%d\n%d\n%d\n%d\n", (int)round((float)sum / (float)n), mid, modeVal, max - min);

	return 0;
}
