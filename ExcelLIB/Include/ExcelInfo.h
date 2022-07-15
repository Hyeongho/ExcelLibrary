#pragma once

#include <Windows.h>
#include <iostream>
#include <list>
#include <vector>
#include <unordered_map>
#include <crtdbg.h>
#include <functional>
#include <string>
#include <math.h>
#include <algorithm>
#include <d3d11.h>
#include <d3dcompiler.h>
#include <dinput.h>
#include <dwrite.h>
#include <dwrite_3.h>
#include <d2d1.h>
#include <stack>
#include <process.h>
#include <locale.h>
#include <WinUser.h>
#include <array>

#define	SAFE_DELETE(p) if(p) { delete p; p = nullptr; }
#define	SAFE_DELETE_ARRAY(p) if(p) { delete[] p; p = nullptr; }
#define	SAFE_RELEASE(p)	if(p) { p->Release(); p = nullptr; }

#define	DECLARE_SINGLE(Type) \
private:\
	static Type* m_Inst;\
public:\
	static Type* GetInst()\
	{\
		if(!m_Inst)\
			{\
				m_Inst = new Type;\
			}\
		return m_Inst;\
	}\
	static void DestroyInst()\
	{\
		SAFE_DELETE(m_Inst);\
	}\
private:\
	Type();\
	~Type();

#define	DEFINITION_SINGLE(Type)	Type* Type::m_Inst = nullptr;