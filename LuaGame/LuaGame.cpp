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

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_ENTER '\r'

extern "C" 
{
#include "..\luaLib\lauxlib.h"
#include "..\luaLib\lua.h"
#include "..\luaLib\lualib.h"
}

#include <conio.h>
#include <iostream>
#include <string>
#include "LuaWrapper.h"

int Will = 40;
char c;

// WILL (HEALTH) FUNCTIONS
int GetWill(lua_State* pLuaState)
{
	lua_pushnumber(pLuaState, Will);
	return 1;
}

int RestoreWill(lua_State* pLuaState)
{
	Will = 40;
	return 0;
}

int LoseWill(lua_State* pLuaState)
{
	Will -= 10;
	lua_pushnumber(pLuaState, Will);
	return 1;
}

// ARROW SELECTION FUNCTIONS
int dialouge_opt1(lua_State* pLuaState)
{
	char selected = 0;
	int numChoices = 1;
	bool selecting = true;
	char c;

	std::string dialogue = lua_tostring(pLuaState, -2); // Dialogue
	std::string opt1 = lua_tostring(pLuaState, -1); // Option 1

	while (selecting == true)
	{
		std::cout << "Will: " << Will << std::endl << std::endl;
		std::cout << dialogue;
		std::cout << ">> " + opt1 + " <<" << std::endl;

		switch (c = _getch())
		{
		case KEY_ENTER:
			selecting = false;
			break;
		default:
			break;
		}
		lua_pushnumber(pLuaState, selected);
		system("cls");
	}
	return 1;
}

int dialouge_opt2(lua_State* pLuaState)
{
	char selected = 0;
	int numChoices = 2;
	bool selecting = true;
	char c;

	std::string dialogue = lua_tostring(pLuaState, -3); // Dialogue
	std::string opt1 = lua_tostring(pLuaState, -2); // Option 1
	std::string opt2 = lua_tostring(pLuaState, -1); // Option 2

	while (selecting == true)
	{
		std::cout << "Will: " << Will << std::endl << std::endl;
		std::cout << dialogue;
		if (selected == 0)
		{
			std::cout << ">> " + opt1 + " <<" << std::endl;
			std::cout << "  " + opt2 << std::endl;
		}
		else if (selected == 1)
		{
			std::cout << "  " + opt1 << std::endl;
			std::cout << ">> " + opt2 + " <<" << std::endl;
		}
		switch (c = _getch())
		{
		case KEY_UP:
			if (selected > 0) --selected;
			break;
		case KEY_DOWN:
			if (selected < numChoices - 1) ++selected;
			break;
		case KEY_ENTER:
			selecting = false;
			break;
		default:
			break;
		}
		lua_pushnumber(pLuaState, selected);
		system("cls");
	}
	return 1;
}

int dialouge_opt3(lua_State* pLuaState)
{
	char selected = 0;
	int numChoices = 3;
	bool selecting = true;
	char c;

	std::string dialogue = lua_tostring(pLuaState, -4); // Dialogue
	std::string opt1 = lua_tostring(pLuaState, -3); // Option 1
	std::string opt2 = lua_tostring(pLuaState, -2); // Option 2
	std::string opt3 = lua_tostring(pLuaState, -1); // Option 3

	while (selecting == true)
	{
		std::cout << "Will: " << Will << std::endl << std::endl;
		std::cout << dialogue;
		if (selected == 0)
		{
			std::cout << ">> " + opt1 + " <<" << std::endl;
			std::cout << "  " + opt2 << std::endl;
			std::cout << "  " + opt3 << std::endl;
		}
		else if (selected == 1)
		{
			std::cout << "  " + opt1 << std::endl;
			std::cout << ">> " + opt2 + " <<" << std::endl;
			std::cout << "  " + opt3 << std::endl;
		}
		else if (selected == 2)
		{
			std::cout << "  " + opt1 << std::endl;
			std::cout << "  " + opt2 << std::endl;
			std::cout << ">> " + opt3 + " <<" << std::endl;
		}
		switch (c = _getch())
		{
		case KEY_UP:
			if (selected > 0) --selected;
			break;
		case KEY_DOWN:
			if (selected < numChoices - 1) ++selected;
			break;
		case KEY_ENTER:
			selecting = false;
			break;
		default:
			break;
		}
		lua_pushnumber(pLuaState, selected);
		system("cls");
	}
	return 1;
}

// CHANGE PAGE FUNCTION
int NextEvent(lua_State* pLuaState)
{
	const char* pFilename = lua_tostring(pLuaState, -1);
	LUA::LuaWrapper::GetInstance()->LoadScript( (char*)pFilename );
	LUA::LuaWrapper::GetInstance()->RunFunction("Event()");
	return 0;
}
bool gLoop = true;

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
				pInstance->LoadScript("NewEvents/Event1.lua");
				corrChar = true;
				system("cls");
				break;
			default:
				system("cls");
			}
		}

		pInstance->RegisterFunction("EnterDialouge1", dialouge_opt1);
		pInstance->RegisterFunction("EnterDialouge", dialouge_opt2);
		pInstance->RegisterFunction("EnterDialouge3", dialouge_opt3);
		pInstance->RegisterFunction("GetLife", GetWill);
		pInstance->RegisterFunction("Restore", RestoreWill);
		pInstance->RegisterFunction("NextEvent", NextEvent);
		pInstance->RegisterFunction("CheckPoint", LoseWill);
		pInstance->RunFunction("Event()");
	}
}


//		CHAR SELECTING METHOD
//int dialouge_opt1(lua_State* pLuaState)
//{
//	bool corrChar = false;
//	while (corrChar == false)
//	{
//		std::cout << "Will: " << Will << std::endl << std::endl;
//		char v[32];
//		std::cout << lua_tostring(pLuaState, -2); // dialouge
//		std::cout << lua_tostring(pLuaState, -1) << std::endl; // option1		
//		std::cin >> v;
//		if (v[0] == 'a' || v[0] == 'A')
//		{
//			lua_pushstring(pLuaState, v);
//			corrChar = true;
//			system("cls");
//		}
//		else
//		{
//			corrChar = false;
//			system("cls");
//		}
//	}
//	return 1;
//}

// int dialouge_opt2(lua_State* pLuaState)
//{
//	bool corrChar = false;
//	while (corrChar == false)
//	{
//		std::cout << "Will: " << Will << std::endl << std::endl;
//		char v[32];
//		std::cout << lua_tostring(pLuaState, -3); // dialouge
//		std::cout << lua_tostring(pLuaState, -2) << std::endl; // option1
//		std::cout << lua_tostring(pLuaState, -1) << std::endl; // option2		
//		std::cin >> v;
//		if (v[0] == 'a' || v[0] == 'A')
//		{
//			lua_pushstring(pLuaState, v);
//			corrChar = true;
//			system("cls");
//		}
//		else if (v[0] == 'b' || v[0] == 'B')
//		{
//			lua_pushstring(pLuaState, v);
//			corrChar = true;
//			system("cls");
//		}
//		else
//		{
//			corrChar = false;
//			system("cls");
//		}
//	}
//	return 1;
//}

//int dialouge_opt3(lua_State* pLuaState)
//{
//	bool corrChar = false;
//	while (corrChar == false)
//	{
//		std::cout << "Will: " << Will << std::endl << std::endl;
//		char v[32];
//		std::cout << lua_tostring(pLuaState, -4); // dialouge
//		std::cout << lua_tostring(pLuaState, -3) << std::endl; // option1
//		std::cout << lua_tostring(pLuaState, -2) << std::endl; // option2
//		std::cout << lua_tostring(pLuaState, -1) << std::endl; // option3
//		std::cin >> v;
//		if (v[0] == 'a' || v[0] == 'A')
//		{
//			lua_pushstring(pLuaState, v);
//			corrChar = true;
//			system("cls");
//		}
//		else if (v[0] == 'b' || v[0] == 'B')
//		{
//			lua_pushstring(pLuaState, v);
//			corrChar = true;
//			system("cls");
//		}
//		else if (v[0] == 'c' || v[0] == 'C')
//		{
//			lua_pushstring(pLuaState, v);
//			corrChar = true;
//			system("cls");
//		}
//		else
//		{
//			corrChar = false;
//			system("cls");
//		}
//	}
//	return 1;
//}
