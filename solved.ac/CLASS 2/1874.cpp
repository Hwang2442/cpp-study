#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
	vector<int> inputs;
	vector<char> commands;

	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		int input;
		scanf("%d", &input);
		inputs.push_back(input);
	}

	int current = 1;
	stack<int> temp;
	for (int i = 0; i < n; i++)
	{
		int target = inputs[i];

		while (current <= target)
		{
			temp.push(current++);
			commands.push_back('+');
		}

		if (!temp.empty() && temp.top() == target)
		{
			temp.pop();
			commands.push_back('-');
		}
		else
		{
			printf("NO\n");
			return 0;
		}
	}

	for (int i = 0; i < commands.size(); i++)
	{
		printf("%c\n", commands[i]);
	}

	return 0;
}
