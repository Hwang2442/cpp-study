#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	vector<vector<char>> board;

	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		char s[50];
		scanf("%s", s);

		vector<char> wb;
		for (int j = 0; j < m; j++)
		{
			wb.push_back(s[j] == 'W' ? 'W' : 'B');
		}

		board.push_back(wb);
	}

	int min = 32;
	for (int y = 0; y <= n - 8; y++)
	{
		for (int x = 0; x <= m - 8; x++)
		{
			for (int tc = 0; tc < 2; tc++)
			{
				char prev = tc == 0 ? 'W' : 'B';
				int count = prev == board[y][x] ? 0 : 1;

				for (int i = 1; i < 64; i++)
				{
					char curr = board[y + i / 8][x + i % 8];
					if (i % 8 == 0)
					{
						if (prev != curr)
						{
							count++;
							continue;
						}
					}
					else
					{
						if (prev == curr)
						{
							prev = curr == 'W' ? 'B' : 'W';
							count++;
							continue;
						}
					}

					prev = curr;
				}

				min = std::min(count, min);
				if (min == 0)
				{
					printf("%d\n", min);

					return 0;
				}
			}
		}
	}

	printf("%d\n", min);

	return 0;
}
