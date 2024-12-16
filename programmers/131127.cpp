#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) 
{
    int answer = 0;
	unordered_map<string, int> purchase_number;

	for (int i = 0; i < want.size(); i++)
	{
		purchase_number[want[i]] = number[i];
	}

	for (int i = 0; i < discount.size(); i++)
	{
		unordered_map<string, int> purchase_count = purchase_number;
		for (int j = i; j < i + 10 && j < discount.size(); j++)
		{
			string name = discount[j];
			if (purchase_count.find(name) != purchase_count.end())
			{
				purchase_count[name]--;
				if (purchase_count[name] == 0)
					purchase_count.erase(name);
			}
		}

		answer += purchase_count.empty() ? 1 : 0;
	}

    return answer;
}
