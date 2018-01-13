#pragma once

#define WIN32_LEAN_AND_MEAN		// ���� ������ �ʴ� ������ Windows ������� �����մϴ�.
#include <windows.h>

#include <YmirBase/YmirBase.h>
#include <YmirBase/Primitives.h>
#include <YmirBase/SmartPointer.h>
#include <YmirBase/Log.h>
#include <YmirBase/TStringBuffer.h>

 #if defined( EL_LOCALE_EXPORTS )
	#define EL_LOCALE_API __declspec(dllexport)
#elif defined( EL_LOCALE_IMPORTS )
	#define EL_LOCALE_API __declspec(dllimport)
#else
	#define EL_LOCALE_API
#endif
