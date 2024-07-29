#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() 
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		char s[50];
		scanf("%s", s);

		string answer = "YES";
		stack<char> brackets;
		for (int j = 0; j < 50; j++)
		{
			if (s[j] == '\0')
				break;

			if (s[j] == '(')
				brackets.push(s[j]);
			else
			{
				if (brackets.empty())
				{
					answer = "NO";
					break;
				}
				else
					brackets.pop();
			}
		}

		if (!brackets.empty())
			answer = "NO";

		printf("%s\n", answer.c_str());
	}

	return 0;
}
