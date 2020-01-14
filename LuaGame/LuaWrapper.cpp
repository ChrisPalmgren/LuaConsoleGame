#include <iostream>
#include <string>

#include "LuaWrapper.h"

namespace LUA
{
	LuaWrapper* LuaWrapper::spInstance = nullptr;

	void LuaWrapper::Initialize()
	{
		m_pLuaState = luaL_newstate();
		luaL_openlibs(m_pLuaState);
	}

	void LuaWrapper::LoadScript(char* pFilename, bool bAutoRun )
	{
		if (luaL_loadfile(m_pLuaState, pFilename) != LUA_OK)
		{
			std::cout << "Failed to load lua file" << std::endl;
			std::string errorString = lua_tostring(m_pLuaState, -1);
			std::cout << errorString << std::endl;
		}
		else
		{
			lua_pcall(m_pLuaState, 0, LUA_MULTRET, 0);
		}
	}
	void LuaWrapper::RunFunction(const char * pFunctionName)
	{
		luaL_dostring(m_pLuaState, pFunctionName);
	}
	void LuaWrapper::RegisterFunction(const char * pFunctionName, void* pFunction)
	{
		lua_register(m_pLuaState, pFunctionName, (lua_CFunction)pFunction);
	}
}