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

	// ����2D��Ⱦ����ʹ��Ӳ�����٣�������չ��ѡ
	m_pSDLRender = SDL_CreateRenderer(m_pSDLWindow, -1, SDL_RENDERER_ACCELERATED);





}
