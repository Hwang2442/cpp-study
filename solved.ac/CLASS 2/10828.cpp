#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int loop = 0;

	string input = "";

	vector<int> data;

	cin >> loop;

	for (int i = 0; i < loop; i++)
	{
		cin >> input;

		if (input == "push")
		{
			int value;

			cin >> value;

			data.push_back(value);
		}
		else if (input == "pop")
		{
			if (!data.empty())
			{
				cout << data.back() << endl;
				data.pop_back();
			}
			else
			{
				cout << -1 << endl;
			}
		}
		else if (input == "size")
		{
			cout << data.size() << endl;
		}
		else if (input == "empty")
		{
			cout << (data.empty() ? 1 : 0) << endl;
		}
		else if (input == "top")
		{
			cout << (!data.empty() ? data.back() : -1) << endl;
		}
	}
}
