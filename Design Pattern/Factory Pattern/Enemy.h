#pragma once
// Enemy 기본 인터페이스
class Enemy
{
public:
	virtual void Init() = 0;
	virtual ~Enemy() { }
};

// Enemy 카테고리에 해당되는 구체적인 Enemy들
class Banshee : public Enemy
{
public:
	virtual void Init() override { }
};

class BatBomb : public Enemy
{
public:
	virtual void Init() override { }
};
