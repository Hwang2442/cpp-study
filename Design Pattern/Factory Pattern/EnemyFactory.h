#pragma once
#include "Enemy.h"

// Enemy 생성 기본 인터페이스
class EnemyFactory
{
public:
	virtual Enemy* CreateEnemy() = 0;
	virtual ~EnemyFactory() { }
};

// 구체적인 Enemy 생성 클래스
class BansheeFactory : public EnemyFactory
{
public:
	virtual Enemy* CreateEnemy() override { return new Banshee(); }
};

class BatBombFactory : public EnemyFactory
{
public:
	virtual Enemy* CreateEnemy() override { return new BatBomb(); }
};
