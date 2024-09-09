#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, vector<int>> network;
    vector<int> connect;
    int virus[100] = { 1, 0, };

    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        network[a - 1].push_back(b - 1);
        network[b - 1].push_back(a - 1);

        if (a == 1)
        {
            connect.push_back(b - 1);
            virus[b - 1] = 1;
        }
        else if (b == 1)
        {
            connect.push_back(a - 1);
            virus[a - 1] = 1;
        }
    }

    for (int i = 0; i < connect.size(); i++)
    {
        auto others = network[connect[i]];
        for (int j = 0; j < others.size(); j++)
        {
            if (virus[others[j]] == 0)
            {
                connect.push_back(others[j]);
                virus[others[j]] = 1;
            }
        }
    }

    printf("%d\n", connect.size());

    return 0;
}
