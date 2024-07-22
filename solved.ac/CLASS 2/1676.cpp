#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int n;
	cin >> n;

	vector<int> res;
	res.push_back(1);

	for (int i = 2; i <= n; i++)
	{
		int carry = 0;
		for (int j = 0; j < res.size(); j++)
		{
			int number = res[j] * i + carry;
			res[j] = number % 10;
			carry = number / 10;
		}

		while (carry != 0)
		{
			int temp = carry % 10;
			res.push_back(temp);
			carry /= 10;
		}
	}

	int count = 0;
	for (int i = 0; i < res.size(); i++)
	{
		if (res[i] == 0)
			count++;
		else
			break;
	}

	cout << count << endl;

	return 0;
}
