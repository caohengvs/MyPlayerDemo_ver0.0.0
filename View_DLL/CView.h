#pragma once
#include "IView.h"
class CView :
	public IView
{
public:
	CView() = default;
	virtual ~CView() = default;

public:
	virtual void testFun() override;
};