#include <iostream>
#include <queue>
#include <map>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int count, target;
		scanf("%d %d", &count, &target);

		map<int, int, greater<int>> orders;
		queue<pair<int, bool>> docs;
		for (int j = 0; j < count; j++)
		{
			int order;
			scanf("%d", &order);

			orders[order]++;
			docs.push(make_pair(order, j == target));
		}

		int print = 0;
		for (auto it = orders.begin(); it != orders.end(); it++)
		{
			for (int j = 0; j < (*it).second; j++)
			{
				while (docs.front().first != (*it).first)
				{
					auto doc = docs.front();
					docs.pop();
					docs.push(doc);
				}

				print++;
				if (docs.front().second)
				{
					printf("%d\n", print);
					print = 0;

					break;
				}

				docs.pop();

				if (print == 0)
					break;
			}

			if (print == 0)
				break;
		}
	}

	return 0;
}
