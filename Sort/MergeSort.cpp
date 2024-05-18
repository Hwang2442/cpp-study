#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void merge_sort(vector<int>& data, int left, int right)
{
	if (left >= right) return;

	int mid = (left + right) / 2;

	merge_sort(data, left, mid);
	merge_sort(data, mid + 1, right);

	vector<int> temp(right - left + 1);
	int i = left, j = mid + 1;

	for (int k = 0; k < temp.size(); k++)
	{
		if (i <= mid && j <= right)
		{
			temp[k] = data[i] <= data[j] ? data[i++] : data[j++];
		}
		else
		{
			temp[k] = i <= mid ? data[i++] : data[j++];
		}
	}

	for (int k = 0; k < temp.size(); k++)
	{
		data[left++] = temp[k];
	}
}

int main()
{
	vector<int> vec{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	// shuffle.
	srand(time(NULL));
	random_shuffle(vec.begin(), vec.end());
    
    

	// before sorting.
	cout << "before sorting : ";
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << (i < vec.size() - 1 ? ", " : "\n\n");
	}

	merge_sort(vec, 0, vec.size() - 1);

	// after sorting.
	cout << "after sorting  : ";
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << (i < vec.size() - 1 ? ", " : "\n");
	}

	return 0;
}