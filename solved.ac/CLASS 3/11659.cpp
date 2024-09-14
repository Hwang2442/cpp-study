#include <iostream>
using namespace std;

int main()
{
    int numbers[100000];
    int sum[100000];

    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    sum[0] = numbers[0];
    for (int i = 1; i < n; i++)
    {
        sum[i] = numbers[i] + sum[i - 1];
    }

    for (int i = 0; i < m; i++)
    {
        int s, e;
        scanf("%d %d", &s, &e);

        printf("%d\n", sum[e - 1] - (s > 1 ? sum[s - 2] : 0));

    }

    return 0;
}
