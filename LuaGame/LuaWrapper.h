#pragma once

namespace LUA
{
	extern "C"
	{
		#include "..\luaLib\lauxlib.h"
		#include "..\luaLib\lua.h"
		#include "..\luaLib\lualib.h"
	}

	class LuaWrapper
	{
	private:
		static LuaWrapper* spInstance;
		lua_State* m_pLuaState;

	public:		
		inline static LuaWrapper* GetInstance() { if (spInstance == nullptr) spInstance = new LuaWrapper(); return spInstance; }


		void Initialize();
		void LoadScript( char* pFilename, bool bAutoRun = true );

		void RunFunction(const char* pFunctionName);
		void RegisterFunction(const char* pFunctionName, void* pFunction );

		template <class T>
		T GetValue(const char* pName)
		{
			std::cout << "cant fucking find your permutation!" << std::endl;
			return T();	
		}

		template<>
		inline int LuaWrapper::GetValue(const char* pName)
		{
			int v = lua_getglobal(m_pLuaState, pName);
			int value = lua_tonumber(m_pLuaState, -1);
			return value;
		}

		template<>
		inline const char* LuaWrapper::GetValue(const char* pName)
		{
			int v = lua_getglobal(m_pLuaState, pName);
			const char* value = lua_tostring(m_pLuaState, -1);
			return value;
		}
	};	
}
