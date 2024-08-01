#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() 
{
	while (true)
	{
		string s;
		getline(cin, s);

		if (s[0] == '.')
			break;

		string answer = "yes";
		stack<char> brackets;

		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '.')
				break;

			if (s[i] == '(' || s[i] == '[')
			{
				brackets.push(s[i]);
				continue;
			}
				
			if (s[i] == ')' || s[i] == ']')
			{
				if (brackets.empty())
				{
					answer = "no";
					break;
				}

				if ((brackets.top() == '(' && s[i] == ')') ||
					(brackets.top() == '[' && s[i] == ']'))
					brackets.pop();
				else
				{
					answer = "no";
					break;
				}
			}
		}

		if (!brackets.empty())
			answer = "no";

		cout << answer << endl;
	}

	return 0;
}
