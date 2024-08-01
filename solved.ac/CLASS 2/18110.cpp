#include <iostream>
#include <cmath>
#include <set>
using namespace std;

int main() 
{
	multiset<int> levels;

	float n;
	scanf("%f", &n);
	if (n < 1)
	{
		printf("%d", 0);

		return 0;
	}

	for (int i = 0; i < n; i++)
	{
		int level;
		scanf("%d", &level);
		levels.insert(level);
	}

	auto start = levels.begin();
	auto end = levels.end();

	float highLow = round(n * 0.15f);
	for (int i = 0; i < highLow; i++)
	{
		++start;
		--end;
	}

	int sum = 0;
	for (auto it = start; it != end; it++)
	{
		sum += *it;
	}

	int answer = round(sum / (n - highLow * 2));
	printf("%d\n", answer);

	return 0;
}
