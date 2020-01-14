// LuaGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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

struct Player
{
	std::string name;
	std::string origin;
	int lvl;
} player;

int createPlayer(lua_State* pLuaState)
{
	int myValue;	
	std::string kimsName = lua_tostring(pLuaState, -1);
	lua_pop(pLuaState, 1);
	myValue = lua_tonumber(pLuaState, -1);
	std::cout << kimsName << " age is : " << myValue << std::endl;
	std::cout << "creating player" << std::endl;
	lua_pushinteger(pLuaState, 10);
	return 1;
}

int main()
{
	LUA::LuaWrapper::GetInstance()->Initialize();

	LUA::LuaWrapper* pInstance = LUA::LuaWrapper::GetInstance();
	pInstance->LoadScript("LUA.lua");

	//pInstance->RegisterFunction("CreatePlayer", createPlayer);
	pInstance->RunFunction("Event1()");

	system("pause");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
