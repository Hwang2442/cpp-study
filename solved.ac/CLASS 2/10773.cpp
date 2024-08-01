#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	int count;
	cin >> count;
	
	auto vec = vector<int>();
	for (int i = 0; i < count; i++)
	{
		int input;
		cin >> input;

		if (input == 0)
			vec.pop_back();
		else
			vec.push_back(input);
	}

	int total = 0;
	for (int i = 0; i < vec.size(); i++)
	{
		total += vec[i];
	}

	cout << total << endl;
}
