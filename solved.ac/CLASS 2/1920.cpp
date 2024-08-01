#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	map<int, bool> numbers;

	int n, m;

	scanf("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		int input;
		scanf("%d", &input);

		numbers.insert(make_pair(input, true));
	}

	scanf("%d", &m);

	for (int i = 0; i < m; ++i)
	{
		int input;
		scanf("%d", &input);

		printf("%d\n", numbers.find(input) != numbers.end() ? 1 : 0);
	}

	return 0;
}
