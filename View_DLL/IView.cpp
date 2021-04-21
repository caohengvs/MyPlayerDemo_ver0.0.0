#include "pch.h"
#include "IView.h"
#include "CView.h"

IView* IView::m_sInstance = nullptr;

IView* IView::s_GetInstance()
{
	if (!m_sInstance)
	{
		m_sInstance = new CView;
	}

	return m_sInstance;
}
