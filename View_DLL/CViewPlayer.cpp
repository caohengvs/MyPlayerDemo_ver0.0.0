#include "pch.h"
#include "CViewPlayer.h"
#include "LocalDefine.h"
#include "LocalHeader.h"
CViewPlayer::~CViewPlayer()
{
	assert(m_pSDLWindow);
	SDL_DestroyWindow(m_pSDLWindow);
	SDL_Quit();
}
void CViewPlayer::testFun()
{

}

void CViewPlayer::InitVideoPlayer()
{
	SDL_Init(SDL_INIT_VIDEO);

	m_pSDLWindow = SDL_CreateWindow
	(
		"TestWindow",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		WINDOW_WITH,
		WINDOW_HEIGHT,
		SDL_WINDOW_OPENGL
	);

	// 创建2D渲染器，使用硬件加速，后期扩展可选
	m_pSDLRender = SDL_CreateRenderer(m_pSDLWindow, -1, SDL_RENDERER_ACCELERATED);





}
