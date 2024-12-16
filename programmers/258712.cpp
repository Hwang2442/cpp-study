#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>
using namespace std;

int solution(vector<string> friends, vector<string> gifts) 
{
    int answer = 0;

    vector<vector<int>> toCount(friends.size(), vector<int>(friends.size(), 0));
    vector<vector<int>> fromCount(friends.size(), vector<int>(friends.size(), 0));
    vector<int> giftVal(friends.size());

    map<string, int> nameIdx;
    for (int i = 0; i < friends.size(); i++)
    {
        nameIdx[friends[i]] = i;
    }

    for (int i = 0; i < gifts.size(); i++)
    {
        stringstream s(gifts[i]);

        string to, from;
        s >> to >> from;

        giftVal[nameIdx[to]]++;
        giftVal[nameIdx[from]]--;

        toCount[nameIdx[to]][nameIdx[from]]++;
        fromCount[nameIdx[from]][nameIdx[to]]++;
    }

    for (int i = 0; i < friends.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < toCount[i].size(); j++)
        {
            int to = toCount[i][j];
            int from = fromCount[i][j];

            if (to == from)
                count += (giftVal[i] == giftVal[j]) ? 0 : ((giftVal[i] > giftVal[j]) ? 1 : 0);
            else if (to > from)
                count++;
        }

        answer = max(answer, count);
    }
	
    return answer;
}
