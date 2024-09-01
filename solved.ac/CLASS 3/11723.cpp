#include <iostream>
#include <cstring>
#include <unordered_set>
using namespace std;

int main()
{
	unordered_set<int> numbers;
	unordered_set<int> all;
	unordered_set<int> clear;
	for (int i = 1; i <= 20; i++)
	{
		all.insert(i);
	}

	int n, input;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		char command[10];
		scanf("%s", command);

		if (!strcmp(command, "add"))
		{
			scanf(" %d", &input);
			numbers.insert(input);
		}
		else if (!strcmp(command, "remove"))
		{
			scanf("%d", &input);
			numbers.erase(input);
		}
		else if (!strcmp(command, "check"))
		{
			scanf("%d", &input);
			printf("%d\n", numbers.find(input) != numbers.end() ? 1 : 0);
		}
		else if (!strcmp(command, "toggle"))
		{
			scanf("%d", &input);
			if (numbers.find(input) != numbers.end())
				numbers.erase(input);
			else
				numbers.insert(input);
		}
		else if (!strcmp(command, "all"))
		{
			numbers = all;
		}
		else if (!strcmp(command, "empty"))
		{
			numbers = clear;
		}
	}

	return 0;
}
