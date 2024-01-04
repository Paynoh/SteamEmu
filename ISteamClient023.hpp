#pragma once
#include <cstdint>
class ISteamClient023
{
public:
	virtual const char* GetPersonaName() = 0;
	virtual bool b() = 0;
	// rax = vtable
	// call [rax+0x10]
	virtual void* c(const char* a1) = 0;
	// call [rax+0x18]
	virtual bool d(void* a1, char* a2) = 0;
	virtual const char* e() = 0;
	virtual bool f() = 0;
	virtual bool g() = 0;
	virtual bool h() = 0;
	virtual bool i() = 0;
	virtual int32_t k() = 0; //call [rax+0x48]  
	virtual int32_t l() = 0;
	virtual bool m() = 0;
	virtual void m1() = 0; //12
	virtual void m2() = 0; //13
	virtual void m3() = 0; //14
	virtual void m4() = 0; //15
	virtual void m5() = 0; //16
	virtual void m66() = 0; //17
	virtual void m6() = 0; //18
	virtual void m7() = 0; //19
	virtual void md() = 0; //20
	virtual void ma() = 0; //21
	virtual void ma2() = 0; //22
	virtual void ms() = 0; //23
	virtual void mawd() = 0; //24
	virtual void mdwa() = 0; //25
	virtual void mdddddd() = 0; //26
	virtual void mdf() = 0; //27
	virtual void mwda() = 0; //28
	virtual void maw3e() = 0; //29
	virtual void mwadaw() = 0; //30
	virtual void mwae3e() = 0; //31
	virtual void mawdawaw() = 0; //32
	virtual void mawdawdawd() = 0; //33


	virtual bool kwajdj(UINT32 appid) = 0;
};