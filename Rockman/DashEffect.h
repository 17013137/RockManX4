#pragma once
#include "Obj.h"

class DashEffect : public Obj
{
public:
	DashEffect();
	~DashEffect();

public:
	virtual void Initialize() override;
	virtual int Update() override;
	virtual int Late_Update() override;
	virtual void Render(HDC hdc) override;
	virtual void Release() override;

public:

private:
	Obj* player;
	DWORD timer;
};

