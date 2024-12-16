#include <string>
#include <vector>
using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) 
{
    int answer = health;
	int attack_t = 0, success_cnt = 0;;

	for (int i = 1; i <= 1000; i++)
	{
		if (attack_t >= attacks.size())
			break;

		if (i != attacks[attack_t][0])
		{
			int heal_amount = bandage[1];
			if (++success_cnt % bandage[0] == 0)
			{
				success_cnt = 0;
				heal_amount += bandage[2];
			}

			answer = min(health, answer + heal_amount);
		}
		else
		{
			success_cnt = 0;
			answer -= attacks[attack_t++][1];

			if (answer <= 0)
			{
				answer = -1;
				break;
			}
		}
	}

    return answer;
}
