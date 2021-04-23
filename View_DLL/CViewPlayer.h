#pragma once
#include "IViewPlayer.h"
#include "LocalHeader.h"
class CViewPlayer :
	public IViewPlayer
{
public:
	CViewPlayer() = default;
	virtual ~CViewPlayer();

public:
	virtual void testFun() override;
	virtual void InitVideoPlayer() override;

private:
	SDL_Window* m_pSDLWindow = nullptr;		// ����
	SDL_Renderer* m_pSDLRender = nullptr;	 // 2D��Ⱦ��

};