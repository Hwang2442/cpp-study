#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() 
{
	queue<string> numbers;

	int n;
	scanf("%d", &n);

	string last;
	for (int i = 0; i <= n; i++)
	{
		string s;
		getline(std::cin, s);

		if (s.find("push") != string::npos)
		{
			last = s.substr(5, s.size());
			numbers.push(last);
		}
		else if (s.find("pop") != string::npos)
		{
			string a = numbers.empty() ? "-1" : numbers.front();
			printf("%s\n", a.c_str());
			if (!numbers.empty())
				numbers.pop();
		}
		else if (s.find("size") != string::npos)
			printf("%d\n", (int)numbers.size());
		else if (s.find("empty") != string::npos)
			printf("%d\n", numbers.empty() ? 1 : 0);
		else if (s.find("front") != string::npos)
			printf("%s\n", numbers.empty() ? "-1" : numbers.front().c_str());
		else if (s.find("back") != string::npos)
			printf("%s\n", numbers.empty() ? "-1" : last.c_str());
	}

	return 0;
}
