#include "pch.h"
#include "IViewPlayer.h"
#include "CViewPlayer.h"

IViewPlayer* IViewPlayer::m_sInstance = nullptr;

IViewPlayer* IViewPlayer::s_GetInstance()
{
	if (!m_sInstance)
	{
		m_sInstance = new CViewPlayer;
	}

	return m_sInstance;
}
