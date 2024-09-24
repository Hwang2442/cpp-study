#include <iostream>
#include <vector>
#include "Enemy.h"
#include "EnemyFactory.h"
using namespace std;

int main()
{
	vector<Enemy*> enemies;

	EnemyFactory* factory = nullptr;
	bool toggle = false;

	// Banshee
	if (toggle)
		factory = new BansheeFactory();
	// BatBomb
	else
		factory = new BatBombFactory();

	if (factory)
	{
		auto enemy = factory->CreateEnemy();

		// enemy 초기화 함수 호출
		enemies.push_back(enemy);

		delete factory;
	}
}
