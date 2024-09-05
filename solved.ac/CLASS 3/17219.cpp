#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	unordered_map<string, string> sitePws;

	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		string site, pw;
		cin >> site >> pw;

		sitePws.insert(make_pair(site, pw));
	}

	for (int i = 0; i < m; i++)
	{
		string site;
		cin >> site;

		cout << sitePws[site] << endl;
	}

	return 0;
}
