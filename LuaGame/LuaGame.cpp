//	Very epic skrillex beep boop thing
//	#include <Windows.h>
//	for (int i = 0; i < 100; ++i)
//	{
//		Beep(i * 10, 100);
//	}
//	Wow, Picasso, that you?
//	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//	for (int k = 1; k < 255; k++)
//	{
//		// pick the colorattribute k you want
//		SetConsoleTextAttribute(hConsole, k);
//		std::cout << k << " I want to be nice today!" << std::endl;
//	}

extern "C" 
{
#include "..\luaLib\lauxlib.h"
#include "..\luaLib\lua.h"
#include "..\luaLib\lualib.h"
}

#include <iostream>
#include <string>
#include "LuaWrapper.h"

int dialouge_opt2(lua_State* pLuaState)
{
	bool corrKey = true;
	char v[32];
	std::cout << lua_tostring(pLuaState, -3); // dialouge
	std::cout << lua_tostring(pLuaState, -2); // option1
	std::cout << lua_tostring(pLuaState, -1); // option2
	std::cin >> v;
	lua_pushstring(pLuaState, v);
	system("cls");
	return 1;
}

int dialouge_opt3(lua_State* pLuaState)
{
	bool corrKey = true;
	char v[32];
	std::cout << lua_tostring(pLuaState, -4); // dialouge
	std::cout << lua_tostring(pLuaState, -3); // option1
	std::cout << lua_tostring(pLuaState, -2); // option2
	std::cout << lua_tostring(pLuaState, -1); // option3
	std::cin >> v;
	lua_pushstring(pLuaState, v);
	system("cls");
	return 1;
}

int NextEvent(lua_State* pLuaState)
{
	//std::cout << lua_tostring(pLuaState, -1) << std::endl;
	const char* pFilename = lua_tostring(pLuaState, -1);
	LUA::LuaWrapper::GetInstance()->LoadScript( (char*)pFilename );
	LUA::LuaWrapper::GetInstance()->RunFunction("Event()");
	return 0;
}
bool gLoop = true;
bool EndGameEvent()
{
	bool corrChar = false;
	while (corrChar == false)
	{
		char v[32];
		//	std::cout << lua_tostring(pLuaState, -3); // dialouge
		//	std::cout << lua_tostring(pLuaState, -2); // option1
		//	std::cout << lua_tostring(pLuaState, -1); // option2
		std::cout << "You are ending the game!" << std::endl << std::endl;
		std::cout << "A) Restart." << std::endl;
		std::cout << "B) Quit." << std::endl;
		std::cin >> v;
		//	lua_pushstring(pLuaState, v);
		if (v[0] == 'a')
		{
			system("cls");
			gLoop = true;
			return gLoop;
			// return true;
		}
		else if (v[0] == 'b')
		{
			system("cls");
			gLoop = false;
			return gLoop;
			// return false;
		}
		else
			system("cls");
	}
	return 0;
}

int main()
{
	while (gLoop == true)
	{
		LUA::LuaWrapper::GetInstance()->Initialize();
		LUA::LuaWrapper* pInstance = LUA::LuaWrapper::GetInstance();

		pInstance->LoadScript("Events/Event1.lua");

		pInstance->RegisterFunction("EnterDialouge", dialouge_opt2);
		pInstance->RegisterFunction("NextEvent", NextEvent);
		pInstance->RunFunction("Event()");
		//pInstance->RegisterFunction("EnterDialouge", dialouge_opt3);
		//pInstance->RunFunction("Event()");
		EndGameEvent();
	}
}
