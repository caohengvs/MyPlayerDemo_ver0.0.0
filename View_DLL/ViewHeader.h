#pragma once

#ifdef _CH_VIEW_DLL_
#define _CH_VIEW_DLL_HEADER_ __declspec(dllexport)
#define _CH_VIEW_DLL_FUN_HEADER_ extern "C" __declspec(dllexport) 
#else
#define _CH_VIEW_DLL_HEADER_		__declspec(dllimport)
#define _CH_VIEW_DLL_FUN_HEADER_  extern "C" __declspec(dllimport) 
#endif

