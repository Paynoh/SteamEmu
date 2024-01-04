#pragma once
#include <cstdint>
#include <Windows.h>
#include "ISteamClient17.hpp"
#include "ISteamClient023.hpp"

extern "C"
{
	__declspec(dllexport) void* __stdcall SteamUser(void);
	__declspec(dllexport) bool __stdcall SteamAPI_Init(void);
	__declspec(dllexport) void __stdcall SteamAPI_UnregisterCallback(void* thisptr);
	__declspec(dllexport) void __stdcall SteamAPI_Shutdown();
	__declspec(dllexport) void __stdcall SteamAPI_RunCallbacks();
	__declspec(dllexport) void __stdcall SteamAPI_RegisterCallback(void* thisptr, int a2);
	__declspec(dllexport) void* __stdcall SteamUserStats();
	__declspec(dllexport) bool __stdcall SteamAPI_IsSteamRunning();
	__declspec(dllexport) void* __stdcall SteamUtils();
	__declspec(dllexport) void* __stdcall SteamFriends();
	__declspec(dllexport) bool __stdcall SteamAPI_RestartAppIfNecessary(UINT32 gameid);
	__declspec(dllexport) INT32 __stdcall Steam_GetHSteamUserCurrent();
	__declspec(dllexport) INT32 __stdcall SteamAPI_GetHSteamUser();
	__declspec(dllexport) void* __stdcall SteamInternal_ContextInit(void* a);
	__declspec(dllexport) void __stdcall SteamAPI_SetMiniDumpComment(const char* pchMsg);
	__declspec(dllexport) void __stdcall SteamAPI_WriteMiniDump(UINT32 uStructuredExceptionCode, void* pvExceptionInfo, UINT32 uBuildID);
	__declspec(dllexport) void* __stdcall SteamInternal_FindOrCreateUserInterface(UINT32 hSteamUser, const char* pszVersion);
	__declspec(dllexport) int32_t SteamAPI_GetHSteamUser();
	__declspec(dllexport) void SteamAPI_RegisterCallResult(void* pCallback, uint64_t hAPICall);
	__declspec(dllexport) void SteamAPI_UnregisterCallResult(void* pCallback, uint64_t hAPICall);
	__declspec(dllexport) bool __stdcall SteamAPI_RestartApp(UINT32 appid);
}

struct SteamContext
{
	void(*pFN)(void*);
	uintptr_t Flag;
	void* Out;
};

class SteamClient : ISteamClient017, ISteamClient023
{
public:
	const char* GetPersonaName()
	{
		return "Paynoh";
	}
	bool b()
	{
		return 1;
	}

	// rax = vtable
	// call [rax+0x10]
	void* c(const char* a1) 
	{
		return (void*)0x14CC88; //IDA
	}
	// call [rax+0x18]
	bool d(void* a1, char* a2)
	{
		return 1;
	}


	const char* e()
	{
		return "english";
	}
	bool f()
	{
		return 1;
	}
	bool g()
	{
		return 1;
	}
	bool h()
	{
		return 1; 
	}
	bool i()
	{
		return 1;
	}
	int32_t k() //call [rax+0x48]  
	{
		return 1172010; //pasted from IDA
	}

	int32_t l()
	{
		return 25;
	}
	bool m()
	{
		return 1;
	}
	 void m1(){}; //12
	 void m2(){}; //13
	 void m3(){}; //14
	 void m4(){}; //15
	 void m5(){}; //16
	 void m66(){}; //17
	 void m6(){}; //18
	 void m7(){}; //19
	 void md(){}; //20
	 void ma(){}; //21
	 void ma2(){}; //22
	 void ms(){}; //23
	 void mawd(){}; //24
	 void mdwa(){}; //25
	 void mdddddd(){}; //26
	 void mdf(){}; //27
	 void mwda(){}; //28
	 void maw3e(){}; //29
	 void mwadaw(){}; //30
	 void mwae3e(){}; //31
	 void mawdawaw(){}; //32
	 void mawdawdawd(){}; //33


	 bool kwajdj(UINT32 appid) { return SteamAPI_RestartApp(appid); } 
};