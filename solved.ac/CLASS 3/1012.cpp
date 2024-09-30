#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		int w, h, count, result = 0;
		scanf("%d %d %d", &w, &h, &count);

		vector<vector<pair<int, int>>> farm(h, vector<pair<int, int>>(w, { 0, 0 }));

		for (int j = 0; j < count; j++)
		{
			int x, y;
			scanf("%d %d", &x, &y);
			farm[y][x] = { 1, 0 };
		}

		for (int y = 0; y < h; y++)
		{
			for (int x = 0; x < w; x++)
			{
				if (farm[y][x].first == 0 || farm[y][x].second == 1)
					continue;

				queue<pair<int, int>> neighbor;
				neighbor.push(make_pair(x, y));

				while (!neighbor.empty())
				{
					int visitX = neighbor.front().first;
					int visitY = neighbor.front().second;
					neighbor.pop();

					if (farm[visitY][visitX].second == 1)
						continue;

					farm[visitY][visitX].second = 1;

					pair<int, int> dir[] = { {0, -1}, {1, 0}, {0, 1}, {-1, 0} };
					for (int j = 0; j < 4; j++)
					{
						int nx = visitX + dir[j].first;
						int ny = visitY + dir[j].second;

						if (nx >= 0 && nx < w && ny >= 0 && ny < h)
						{
							if (farm[ny][nx].first == 1 && farm[ny][nx].second != 1)
								neighbor.push(make_pair(nx, ny));
						}
					}
				}

				result++;
			}
		}

		printf("%d\n", result);
	}

	return 0;
}
