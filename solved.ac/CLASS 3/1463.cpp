#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int* counts = new int[n] { 0, };

	for (int i = 1; i < n; i++)
	{
		counts[i] = counts[i - 1] + 1;

		int index = i + 1;

		if (index % 2 == 0)
		{
			counts[i] = min(counts[i], counts[index / 2 - 1] + 1);
		}

		if (index % 3 == 0)
		{
			counts[i] = min(counts[i], counts[index / 3 - 1] + 1);
		}
	}

	cout << counts[n - 1] << endl;

	delete[] counts;

	return 0;
}
