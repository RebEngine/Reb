#pragma once

#ifdef RE_PLATFORM_WINDOWS
	#ifdef RE_BUILD_DLL
		#define REB_API __declspec(dllexport)
	#else
		#define REB_API __declspec(dllimport)
	#endif
#else
	#error Hazel only supports Windows!
#endif