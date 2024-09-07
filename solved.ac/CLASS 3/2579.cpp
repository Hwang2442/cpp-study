#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int stair[300] = { 0 };
    int score[300] = { 0 };
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &stair[i]);
    }

    score[0] = stair[0]; 
    if (n > 1) score[1] = stair[0] + stair[1]; 
    if (n > 2) score[2] = max(stair[0] + stair[2], stair[1] + stair[2]); 

    for (int i = 3; i <= n; i++) 
    {
        score[i] = max(score[i - 2] + stair[i], score[i - 3] + stair[i - 1] + stair[i]);
    }

    printf("%d\n", score[n - 1]);

    return 0;
}
