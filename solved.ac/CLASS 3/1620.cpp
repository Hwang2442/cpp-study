#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	vector<string> vec;
	map<string, int> pairs;

	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;

		vec.push_back(s);
		pairs.insert(make_pair(s, i + 1));
	}

	for (int i = 0; i < m; i++)
	{
		char s[20];
		scanf("%s", s);

		int index = atoi(s);
		if (index != 0)
		{
			printf("%s\n", vec[index - 1].c_str());
		}
		else
		{
			printf("%d\n", pairs[s]);
		}
	}

	return 0;
}
