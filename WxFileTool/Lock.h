#pragma once
#include<Windows.h>
class CLock
{
public:
	void Lock() { EnterCriticalSection(&cs_); }
	void UnLock() { LeaveCriticalSection(&cs_); }

public:
	CLock() { InitializeCriticalSection(&cs_); }
	~CLock() { DeleteCriticalSection(&cs_); }
private:
	static CRITICAL_SECTION cs_;
};

CRITICAL_SECTION CLock::cs_;
