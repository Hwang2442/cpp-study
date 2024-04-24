#include <iostream>
#include <vector>
using namespace std;

void selection_sort(vector<int>& data)
{
	for (int i = 0; i < data.size() - 1; i++)
	{
		int index = i;

		for (int j = i + 1; j < data.size(); j++)
		{
			if (data[index] > data[j])
			{
				index = j;
			}
		}

		swap(data[i], data[index]);
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

	selection_sort(vec);

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << ", ";
	}
	cout << endl;

	return 0;
}