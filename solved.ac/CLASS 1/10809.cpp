#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string input;
	cin >> input;

	for (char alpabet = 'a'; alpabet <= 'z'; alpabet++)
	{
		n = input.find(alpabet);
		if (n == string::npos) cout << "-1" << " ";
		else cout << n << " ";
	}
	cout << endl;

	return 0;
}
