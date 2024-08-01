#include <iostream>
#include <queue>
using namespace std;

int main() 
{
	int n;
	scanf("%d", &n);

	queue<int> numbers;
	for (int i = 1; i <= n; i++)
	{
		numbers.push(i);
	}

	while (numbers.size() > 1)
	{
		numbers.pop();
		int val = numbers.front();
		numbers.pop();
		numbers.push(val);
	}

	printf("%d\n", numbers.front());

	return 0;
}
