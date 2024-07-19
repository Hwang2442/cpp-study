#include <iostream>	
#include <vector>
#include <algorithm>
using namespace std;

class Tile
{
public:
	Tile(int _x, int _y, bool _isHouse)
	{
		x = _x;
		y = _y;
		isHouse = _isHouse;
	}

	int x;
	int y;

	bool isHouse;

};

void CheckTile(vector<int>& opend, vector<Tile>& tiles, int i, int tileSize)
{
	if (tiles[i].x - 1 >= 0)		opend.push_back(i - 1);			// left
	if (tiles[i].x + 1 < tileSize)	opend.push_back(i + 1);			// right
	if (tiles[i].y - 1 >= 0)		opend.push_back(i - tileSize);	// down
	if (tiles[i].y + 1 < tileSize)	opend.push_back(i + tileSize);	// up
}

int main()
{
	vector<Tile> tiles;
	vector<int> houseCounts;

	int tileSize = 0;
	cin >> tileSize;

	for (int i = 0; i < tileSize; i++)
	{
		string input;
		cin >> input;

		for (int j = 0; j < input.length(); j++)
		{
			Tile tile(j, i, input[j] == '1');
			tiles.push_back(tile);
		}
	}

	for (int i = 0; i < tiles.size(); i++)
	{
		if (tiles[i].isHouse)
		{
			int houseCount = 1;
			tiles[i].isHouse = false;

			vector<int> opend;
			CheckTile(opend, tiles, i, tileSize);
			
			while (opend.size() > 0)
			{
				vector<int> newOpend;

				for (int j = 0; j < opend.size(); j++)
				{
					if (tiles[opend[j]].isHouse)
					{
						houseCount++;
						tiles[opend[j]].isHouse = false;

						CheckTile(newOpend, tiles, opend[j], tileSize);
					}
				}

				opend.clear();

				for (int j = 0; j < newOpend.size(); j++)
				{
					opend.push_back(newOpend[j]);
				}
			}

			houseCounts.push_back(houseCount);
		}
	}

	sort(houseCounts.begin(), houseCounts.end());

	cout << houseCounts.size() << endl;

	for (int i = 0; i < houseCounts.size(); i++)
	{
		cout << houseCounts[i] << endl;
	}

	return 0;
}
