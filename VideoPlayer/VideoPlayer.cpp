// VideoPlayer.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include"../View_DLL/IView.h"
#pragma comment(lib,"View_DLL.lib")
using namespace std;
int main()
{
	IView* iView = IView::s_GetInstance();
	iView->testFun();
}