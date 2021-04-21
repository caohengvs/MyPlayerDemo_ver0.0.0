#pragma once
#include "ViewHeader.h"

class _CH_VIEW_DLL_HEADER_ IView
{
public:
	IView() = default;
	~IView() = default;

public:
	static IView* m_sInstance;

public:
	static IView* s_GetInstance();

public:
	virtual void testFun() = 0;
};