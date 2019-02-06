#pragma once

#ifdef BLADE_PLATFORM_WINDOWS
	#ifdef BLADE_BUILD_DLL
		#define BLADE_API __declspec(dllexport)
	#else
		#define BLADE_API __declspec(dllimport)
	#endif
#else
	#error Blade only supports Windows!
#endif