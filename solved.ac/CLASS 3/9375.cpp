#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> clothes;

    int n, m, result = 1;
    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &n);

        for (int j = 0; j < n; j++)
        {
            string name, type;
            cin >> name >> type;

            clothes[type]++;
        }

        for (auto& c : clothes)
        {
            result *= (c.second + 1);
        }

        printf("%d\n", result - 1);
        clothes.clear();
        result = 1;
    }

    return 0;
}
