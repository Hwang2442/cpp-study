#include <iostream>
#include <set>
using namespace std;

int main()
{
	multiset<int> people;

	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		int minute;
		scanf("%d", &minute);

		people.insert(minute);
	}

	int result = 0, temp = 0;
	for (auto it = people.begin(); it != people.end(); it++)
	{
		temp += *it;
		result += temp;
	}

	printf("%d\n", result);

	return 0;
}
