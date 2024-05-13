#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

void quick_sort(vector<int>& data, int left, int right)
{
	if (left >= right) return;

	int pivot = right;
	int lo = left;
	int hi = pivot - 1;

	while (true)
	{
		while (data[lo] <= data[pivot] && lo <= hi) lo++;
		while (data[hi] > data[pivot] && hi > lo) hi--;

		if (lo < hi)
		{
			swap(data[lo], data[hi]);
		}
		else break;
	}

	swap(data[lo], data[pivot]);

	quick_sort(data, left, lo - 1);
	quick_sort(data, lo + 1, right);
}

int main()
{
	vector<int> vec{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	// shuffle.
	{
		srand(time(NULL));

		for (int i = 0; i < 100; i++)
		{
			swap(vec[rand() % vec.size()], vec[rand() % vec.size()]);
		}
	}

	// before sorting.
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << (i < vec.size() - 1 ? ", " : "\n\n");
	}

	quick_sort(vec, 0, vec.size() - 1);

	// after sorting.
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << (i < vec.size() - 1 ? ", " : "\n");
	}

	return 0;
}