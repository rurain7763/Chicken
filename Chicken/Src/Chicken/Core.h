#pragma once

#ifdef PLATFORM_WINDOWS
	#ifdef BUILD_DLL
		#define CHICKEN_API __declspec(dllexport)
	#else
		#define CHICKEN_API __declspec(dllimport)
	#endif
#else
	#error only support windows
#endif


