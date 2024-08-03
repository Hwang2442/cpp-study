#include <iostream>
using namespace std;

int main() 
{
	int caseCount;
	cin >> caseCount;

	for (int i = 0; i < caseCount; i++)
	{
		int h, w, n;
		cin >> h >> w >> n;

		int floor = n % h;
		if (floor == 0)
			floor = h;

		int room = n / h + (floor == h ? 0 : 1);

		printf("%d%02d\n", floor, room);
	}
}
