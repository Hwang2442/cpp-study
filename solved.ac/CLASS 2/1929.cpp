#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);

	vector<int>* numbers = new vector<int>(1000001);
	numbers->at(0) = 0;
	numbers->at(1) = 1;
	for (int i = 2; i <= 1000000; i++)
	{
		if (numbers->at(i) == 0)
		{
			for (int j = 2; i * j <= 1000000; j++)
			{
				numbers->at(i * j) = 1;
			}
		}
	}
	
	for (int i = m; i <= n; i++)
	{
		if (numbers->at(i) == 0)
		{
			printf("%d\n", i);
		}
	}

	return 0;
}
