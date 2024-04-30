#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int>& data)
{
	for (int i = 1; i < data.size(); i++)
	{
		int key = data[i];
		int j;

		for (j = i - 1; j >= 0 && data[j] > key; j--)
		{
			data[j + 1] = data[j];
		}

		data[++j] = key;
	}
}

int main()
{
	vector<int> vec;

	for (int i = 10; i > 0; i--)
	{
		vec.push_back(i);
	}

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << ", ";
	}
	cout << endl << endl;

	insertion_sort(vec);

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << ", ";
	}
	cout << endl;

	return 0;
}