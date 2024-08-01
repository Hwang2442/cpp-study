#include <iostream>
#include <map>
using namespace std;

int main() 
{
	map<int, int> numbers;
	
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int number;
		scanf("%d", &number);
		numbers[number]++;
	}

	int m;
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		int number;
		scanf("%d", &number);

		int count = numbers.find(number) != numbers.end() ? numbers[number] : 0;
		printf("%d ", count);
	}

	return 0;
}
