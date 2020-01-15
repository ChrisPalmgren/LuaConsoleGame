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
	std::cout << lua_tostring(pLuaState, -1) << std::endl;
	const char* pFilename = lua_tostring(pLuaState, -1);
	LUA::LuaWrapper::GetInstance()->LoadScript( (char*)pFilename );
	return 0;
}

bool EndGameEvent()
{
	bool corrChar = false;
	while (corrChar == false)
	{
		char v[32];
		std::cout << "[Incoming LUA Dialogue] Game Over.. Loser. / You Win!" << std::endl << std::endl;// lua_tostring(pLuaState, -3); // dialouge
		std::cout << "[Incoming LUA Opt1] A) Restart" << std::endl;// lua_tostring(pLuaState, -2); // option1
		std::cout << "[Incoming LUA Opt2] B) Quit" << std::endl;// lua_tostring(pLuaState, -1); // option2
		std::cin >> v;
		std::cout << v;
		//lua_pushstring(pLuaState, v);
		if (v[0] == 'a')
		{
			system("cls");
			corrChar = true;
			return true;
		}
		else if (v[0] == 'b')
		{
			system("cls");
			corrChar = true;
			return false;
		}
		else
			system("cls");
	}
}

int main()
{
	bool gLoop = true;
	while (gLoop == true)
	{
		LUA::LuaWrapper::GetInstance()->Initialize();
		LUA::LuaWrapper* pInstance = LUA::LuaWrapper::GetInstance();

		pInstance->LoadScript("LUA.lua");

		pInstance->RegisterFunction("EnterDialouge", dialouge_opt2);
		pInstance->RunFunction("Event1()");

		gLoop = EndGameEvent();
	}

	system("pause");
}
