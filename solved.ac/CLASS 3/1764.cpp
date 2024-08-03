#include <iostream>	
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<string> unheard;
	map<string, int> map;

	for (int i = 0; i < n; i++)
	{
		string name;
		cin >> name;

		map.insert(make_pair(name, i));
	}

	for (int i = 0; i < m; i++)
	{
		string name;
		cin >> name;

		if (map.find(name) != map.end())
		{
			unheard.push_back(name);
		}
	}

	sort(unheard.begin(), unheard.end());

	cout << unheard.size() << endl;

	for (int i = 0; i < unheard.size(); i++)
	{
		cout << unheard[i] << endl;
	}

	return 0;
}
