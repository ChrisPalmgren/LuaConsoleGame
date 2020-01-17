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

#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <WinUser.h>
#include <iostream>
#include <string>
#include <vector>
#include "LuaWrapper.h"

int Will = 40;
char c;

int checkpointState(lua_State* pLuaState)
{
	Will -= 10;
	return 0;
}

int dialouge_opt2(lua_State* pLuaState)
{
	bool corrChar = false;
	while (corrChar == false)
	{
		std::cout << "Will: " << Will << std::endl << std::endl;
		char v[32];
		std::cout << lua_tostring(pLuaState, -3); // dialouge
		std::cout << lua_tostring(pLuaState, -2); // option1
		std::cout << lua_tostring(pLuaState, -1); // option2
		/*switch (v[0] = _getch())
		{
		case 'a': case 'A':
			lua_pushstring(pLuaState, v);
			corrChar = true;
			system("cls");
			break;
		case 'b': case 'B':
			lua_pushstring(pLuaState, v);
			corrChar = true;
			system("cls");
			break;
		default:
			system("cls");
			break;
		}*/
		
		std::cin >> v;
		if (v[0] == 'a' || v[0] == 'A')
		{
			lua_pushstring(pLuaState, v);
			corrChar = true;
			system("cls");
		}
		else if (v[0] == 'b' || v[0] == 'B')
		{
			lua_pushstring(pLuaState, v);
			corrChar = true;
			system("cls");
		}
		else
		{
			corrChar = false;
			system("cls");
		}
	}
	return 1;
}

int dialouge_opt3(lua_State* pLuaState)
{
	bool corrChar = false;
	while (corrChar == false)
	{
		std::cout << "Will: " << Will << std::endl << std::endl;
		char v[32];
		std::cout << lua_tostring(pLuaState, -4); // dialouge
		std::cout << lua_tostring(pLuaState, -3); // option1
		std::cout << lua_tostring(pLuaState, -2); // option2
		std::cout << lua_tostring(pLuaState, -1); // option3
		std::cin >> v;
		if (v[0] == 'a' || v[0] == 'A')
		{
			lua_pushstring(pLuaState, v);
			corrChar = true;
			system("cls");
		}
		else if (v[0] == 'b' || v[0] == 'B')
		{
			lua_pushstring(pLuaState, v);
			corrChar = true;
			system("cls");
		}
		else if (v[0] == 'c')
		{
			lua_pushstring(pLuaState, v);
			corrChar = true;
			system("cls");
		}
		else
		{
			corrChar = false;
			system("cls");
		}
	}
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
		if (v[0] == 'a' || v[0] == 'A')
		{
			system("cls");
			gLoop = true;
			return gLoop;
			// return true;
		}
		else if (v[0] == 'b' || v[0] == 'B')
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

		bool corrChar = false;
		while (corrChar == false)
		{
			char v[32];
			std::cout << "[Insert very epic gametitle.]\n\n";
			std::cout << "plAy\n";
			switch (c = _getch())
			{
			case 'a': case 'A':
				pInstance->LoadScript("Events/Event1.lua");
				corrChar = true;
				system("cls");
				break;
			default:
				system("cls");
			}
			/*std::cin >> v;
			if (v[0] == 'a' || v[0] == 'A')
			{
				pInstance->LoadScript("Events/Event1.lua");
				corrChar = true;
				system("cls");
			}
			else
			{
				corrChar = false;
				system("cls");
			}*/
		}

		pInstance->RegisterFunction("EnterDialouge", dialouge_opt2);
		pInstance->RegisterFunction("NextEvent", NextEvent);
		pInstance->RegisterFunction("CheckPoint", checkpointState);
		pInstance->RunFunction("Event()");

		EndGameEvent();
	}
}
