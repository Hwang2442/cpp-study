#include <iostream>
using namespace std;

int main()
{
	int zeroCount[41] = { 1, 0, };
	int oneCount[41] = { 0, 1, };

	for (int i = 2; i < 41; i++)
	{
		zeroCount[i] += zeroCount[i - 1] + zeroCount[i - 2];
		oneCount[i] += oneCount[i - 1] + oneCount[i - 2];
	}

	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int n;
		scanf("%d", &n);

		printf("%d %d\n", zeroCount[n], oneCount[n]);
	}

	return 0;
}
