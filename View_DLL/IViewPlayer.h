#pragma once
#include "ViewHeader.h"

class _CH_VIEW_DLL_HEADER_ IViewPlayer
{
public:
	IViewPlayer() = default;
	~IViewPlayer() = default;

public:
	static IViewPlayer* m_sInstance;

public:
	static IViewPlayer* s_GetInstance();

	static IViewPlayer* s_DestroyInstance();

public:
	virtual void testFun() = 0;
	virtual void InitVideoPlayer()  = 0;

};