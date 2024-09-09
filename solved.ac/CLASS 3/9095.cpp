#include <iostream>
using namespace std;

int main()
{
    int number[11] = { 1, 2, 4, 0, };
    for (int i = 3; i < 11; i++)
    {
        number[i] = number[i - 1] + number[i - 2] + number[i - 3];
    }

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);

        printf("%d\n", number[num - 1]);
    }

    return 0;
}
