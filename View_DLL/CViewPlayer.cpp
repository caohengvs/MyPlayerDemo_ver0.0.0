#include "pch.h"
#include "CViewPlayer.h"
#include "LocalDefine.h"
#include "LocalHeader.h"
void CViewPlayer::testFun()
{
	SDL_Init(SDL_INIT_VIDEO);

	m_pSDLWindow = SDL_CreateWindow(
		"TestWindow",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		WINDOW_WITH,
		WINDOW_HEIGHT,
		SDL_WINDOW_OPENGL
	);

	// 判断指针是否有效
	assert(m_pSDLWindow);

	SDL_Delay(3000);

	SDL_DestroyWindow(m_pSDLWindow);

	SDL_Quit();

}
