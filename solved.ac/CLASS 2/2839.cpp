#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	int count = -1;

	cin >> n;

	for (int i = 0; i * 5 <= n; i++)
	{
		if ((n - (i * 5)) % 3 == 0)
		{
			count = i + (n - (i * 5)) / 3;
		}
	}

	cout << count << endl;

	return 0;
}
