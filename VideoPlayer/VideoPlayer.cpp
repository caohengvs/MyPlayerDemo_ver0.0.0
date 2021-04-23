// VideoPlayer.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include"../View_DLL/IViewPlayer.h"
#pragma comment(lib, "View_DLL.lib")
using namespace std;
int main()
{
	IViewPlayer* iView = IViewPlayer::s_GetInstance();
	iView->InitVideoPlayer();
	return 0;
}