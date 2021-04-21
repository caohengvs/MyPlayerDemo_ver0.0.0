#pragma once
#include "IViewPlayer.h"
#include "LocalHeader.h"
class CViewPlayer :
	public IViewPlayer
{
public:
	CViewPlayer() = default;
	virtual ~CViewPlayer() = default;

public:
	virtual void testFun() override;

private:
	SDL_Window* m_pSDLWindow = nullptr;
};