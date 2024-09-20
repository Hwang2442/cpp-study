#include <iostream>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);

	int rect[1000] = { 1, 2, };
	for (int i = 2; i < n; i++)
	{
		rect[i] = (rect[i - 1] + rect[i - 2]) % 10007;
	}

	printf("%d\n", rect[n - 1]);

	return 0;
}
