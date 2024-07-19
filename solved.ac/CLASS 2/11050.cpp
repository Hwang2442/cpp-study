#include <iostream>
using namespace std;

int main() 
{
	int n, k;
	cin >> n >> k;

	int factorial[11] = { 1, 1, };
	for (int i = 2; i <= 10; i++)
	{
		factorial[i] = i * factorial[i - 1];
	}

	int answer = factorial[n] / (factorial[n - k] * factorial[k]);
	cout << answer << endl;

	return 0;
}
