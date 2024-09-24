#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int n;
    scanf("%d", &n);

    int dp[50001] = { 0, };
    fill(dp, dp + n + 1, 4);
    dp[0] = 0;

    for (int i = 1; i * i <= n; ++i) 
    {
        int square = i * i;
        for (int j = square; j <= n; ++j) 
        {
            dp[j] = min(dp[j], dp[j - square] + 1);
        }
    }

    printf("%d\n", dp[n]);

    return 0;
}
