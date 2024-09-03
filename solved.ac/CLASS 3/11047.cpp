#include <iostream>
using namespace std;

int main()
{
	int coinValues[10];

	int n, k;
	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &coinValues[i]);
	}

	int result = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		if (coinValues[i] > k)
			continue;

		result += k / coinValues[i];
		k %= coinValues[i];
	}

	printf("%d\n", result);

	return 0;
}
