#include <Windows.h>
#include "steam_api.hpp"

extern "C" __declspec(dllexport) bool __stdcall SteamAPI_Init(void)
{
	return 1;
}
extern "C"  __declspec(dllexport) void* __stdcall SteamApps(void)
{
	return (void*)0;
}
extern "C"  __declspec(dllexport) void* __stdcall SteamUser(void)
{
	return (void*)0;
}
__declspec(dllexport) void __stdcall SteamAPI_RegisterCallback(void* a1)
{

}
extern "C" __declspec(dllexport) void __stdcall SteamAPI_UnregisterCallback(void* a1)
{
	//
}
extern "C" __declspec(dllexport) void __stdcall SteamAPI_Shutdown()
{

}
extern "C" __declspec(dllexport) void __stdcall SteamAPI_RunCallbacks()
{

}
extern "C" __declspec(dllexport) void __stdcall SteamAPI_RegisterCallback(void* a1, int a2)
{

}

extern "C"  __declspec(dllexport) void* __stdcall SteamUserStats()
{
	return (void*)0;
}

extern "C" __declspec(dllexport) bool __stdcall SteamAPI_IsSteamRunning()
{
	return 1;
}

extern "C"  __declspec(dllexport) void* __stdcall SteamUtils()
{
	return (void*)0;
}

__declspec(dllexport) void* __stdcall SteamFriends()
{
	return (void*)0;
}

extern "C" __declspec(dllexport) bool __stdcall SteamAPI_RestartAppIfNecessary(UINT32 gameid)
{
	return 0;
}

__declspec(dllexport) int32_t SteamAPI_GetHSteamUser()
{
	return 1;
}

void SteamAPI_RegisterCallResult(void* pCallback, uint64_t hAPICall)
{

}
void SteamAPI_UnregisterCallResult(void* pCallback, uint64_t hAPICall)
{

}



__declspec(dllexport) void* __stdcall SteamInternal_ContextInit(void* ptr)
{
	SteamContext* Ctx = (SteamContext*)ptr;
	if (Ctx && Ctx->Flag != 1)
	{
		Ctx->Flag = 1;
		Ctx->pFN(&Ctx->Out);
	}
	return &Ctx->Out; //lea rax, [rcx+10h]
}

__declspec(dllexport) void __stdcall SteamAPI_SetMiniDumpComment(const char* pchMsg)
{
}
__declspec(dllexport) void __stdcall SteamAPI_WriteMiniDump(UINT32 uStructuredExceptionCode, void* pvExceptionInfo, UINT32 uBuildID)
{

}
static SteamClient* Client;
void* GetSteamClient(const char* pszVersion)
{
	Client = new SteamClient; 
	return Client; 
}

__declspec(dllexport) void* __stdcall SteamInternal_FindOrCreateUserInterface(UINT32 hSteamUser, const char* pszVersion)
{
	if (strcmp(pszVersion, "SteamClient017") == 0)
	{
		return (ISteamClient017*)GetSteamClient(pszVersion);
	}

	else if (strcmp(pszVersion, "SteamClient023") == 0)
	{
		return (ISteamClient023*)GetSteamClient(pszVersion);
	}
	return (ISteamClient017*)GetSteamClient(pszVersion);
}
__declspec(dllexport) bool __stdcall SteamAPI_RestartApp(UINT32 appid)
{
	return SteamAPI_RestartAppIfNecessary(appid);
}
