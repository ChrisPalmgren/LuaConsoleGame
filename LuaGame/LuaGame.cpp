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

#define KEY_UP 72       //Up arrow character
#define KEY_DOWN 80    //Down arrow character
#define KEY_ENTER '\r'//Enter key charatcer

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

int Will = 0;
char c;

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

//		ARROW SELECTING METHOD 1
int dialouge_opt1(lua_State* pLuaState)
{
	bool corrChar = false;
	char selected = 0;		//Keeps track of which option is selected.
	int numChoices = 1;		//The number of choices we have.
	bool selecting = true;	//True if we are still waiting for the user to press enter.
	char c;

	//char v[32];
	std::string dialogue = lua_tostring(pLuaState, -2); // dialouge

	std::string opt1 = lua_tostring(pLuaState, -1);

	while (selecting == true) //As long as we are selecting...
	{
		std::cout << "Will: " << Will << std::endl << std::endl;
		std::cout << dialogue;
		std::cout << ">> " + opt1 + " <<" << std::endl;

		switch ((c = _getch())) // Check value of the last inputed character.
		{
		case KEY_ENTER:
			selecting = false; // We are done selecting the option.
			break;
		default:
			break;
		}
		lua_pushnumber(pLuaState, selected);
		system("cls");
	}
	return 1;
}

//		ARROW SELECTING METHOD 2
int dialouge_opt2(lua_State* pLuaState)
{
	bool corrChar = false;
	char selected = 0;		//Keeps track of which option is selected.
	int numChoices = 2;		//The number of choices we have.
	bool selecting = true;	//True if we are still waiting for the user to press enter.
	char c;

	//char v[32];
	std::string dialogue = lua_tostring(pLuaState, -3); // dialouge

	std::string opt1 = lua_tostring(pLuaState, -2);
	std::string opt2 = lua_tostring(pLuaState, -1);

	while (selecting == true) //As long as we are selecting...
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
		switch ((c = _getch()) ) // Check value of the last inputed character.
		{
		case KEY_UP:
			if (selected > 0) --selected; // Dont decrement if we are at the first option.
			break;
		case KEY_DOWN:
			if (selected < numChoices - 1) ++selected; // Dont increment if we are at the last option.
			break;
		case KEY_ENTER:
			selecting = false; // We are done selecting the option.
			break;
		default:
			break;
		}
		lua_pushnumber(pLuaState, selected);
		system("cls");
	}
	return 1;
}

//		ARROW SELECTING METHOD 3
int dialouge_opt3(lua_State* pLuaState)
{
	bool corrChar = false;
	char selected = 0;		//Keeps track of which option is selected.
	int numChoices = 3;		//The number of choices we have.
	bool selecting = true;	//True if we are still waiting for the user to press enter.
	char c;

	//char v[32];
	std::string dialogue = lua_tostring(pLuaState, -4); // dialouge

	std::string opt1 = lua_tostring(pLuaState, -3);
	std::string opt2 = lua_tostring(pLuaState, -2);
	std::string opt3 = lua_tostring(pLuaState, -1);

	while (selecting == true) //As long as we are selecting...
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
		switch ((c = _getch())) // Check value of the last inputed character.
		{
		case KEY_UP:
			if (selected > 0) --selected; // Dont decrement if we are at the first option.
			break;
		case KEY_DOWN:
			if (selected < numChoices - 1) ++selected; // Dont increment if we are at the last option.
			break;
		case KEY_ENTER:
			selecting = false; // We are done selecting the option.
			break;
		default:
			break;
		}
		lua_pushnumber(pLuaState, selected);
		system("cls");
	}
	return 1;
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

//		CHAR SELECTING METHOD
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

		//EndGameEvent();
	}
}
