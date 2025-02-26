#pragma once
#include "Obj.h"

class BossHp : public Obj
{
public:
	BossHp();
	~BossHp();

public:
	virtual void Initialize() override;
	virtual int Update() override;
	virtual int Late_Update() override;
	virtual void Render(HDC hdc) override;
	virtual void Release() override;

private:
	float Hp;
	float MaxHp;
};

