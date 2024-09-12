#include <iostream>
using namespace std;

int main()
{
    long long int tri[100] = { 1, 1, 1, 2, 2 };
    for (int i = 5; i < 100; i++)
    {
        tri[i] = tri[i - 1] + tri[i - 5];
    }

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int num;
        scanf("%d", &num);

        printf("%lld\n", tri[num - 1]);
    }

    return 0;
}
