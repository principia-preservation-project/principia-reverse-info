#include "stdio.h"

/*
	USAGE: Principia.exe base address + lua address constant
*/

// lua_
constexpr std::uintptr_t lua_tolstring	     = 0x392714;
constexpr std::uintptr_t lua_pcall		     = 0x39197C; 
constexpr std::uintptr_t lua_pushbool	     = 0x391A58;
constexpr std::uintptr_t lua_getinfo	     = 0x390DA8;
constexpr std::uintptr_t lua_getstack	     = 0x391288;
constexpr std::uintptr_t lua_error		     = 0x390AF4;
constexpr std::uintptr_t lua_tointeger	     = 0x38B4C4;
constexpr std::uintptr_t lua_tonumber	     = 0x38B548;
constexpr std::uintptr_t lua_checkstack	     = 0x38B634;
constexpr std::uintptr_t lua_checktype	     = 0x38B688;
constexpr std::uintptr_t lua_unprotcall	     = 0x38BFC0;
constexpr std::uintptr_t lua_initlib	     = 0x38C558; // This is where the _G table is being registered and set up. You can hook this to bring your own features in the lua environment of the game itself.
constexpr std::uintptr_t lua_setglobalfield  = 0x38C6E8;
constexpr std::uintptr_t lua_createtable	 = 0x390A4C;
constexpr std::uintptr_t lua_getfield		 = 0x390CB0;
constexpr std::uintptr_t lua_load			 = 0x3914F0;
constexpr std::uintptr_t lua_pushcclosure	 = 0x391A7C;
constexpr std::uintptr_t lua_pushfstring	 = 0x391B0C;
constexpr std::uintptr_t lua_pushliteral	 = 0x391B74;
constexpr std::uintptr_t lua_pushvalue		 = 0x391BE4;
constexpr std::uintptr_t lua_pushstring		 = 0x391C24;
constexpr std::uintptr_t lua_pushglobaltable = 0x391E1C;
constexpr std::uintptr_t lua_remove			 = 0x392080;
constexpr std::uintptr_t lua_setfield		 = 0x39222C;
constexpr std::uintptr_t lua_settop			 = 0x3924EC;
constexpr std::uintptr_t lua_tolstring		 = 0x392714;
constexpr std::uintptr_t lua_type			 = 0x392934;
constexpr std::uintptr_t lua_typeerror		 = 0x3F6230;

// luaL_
constexpr std::uintptr_t luaL_setfuncs	    = 0x38C628;
constexpr std::uintptr_t luaL_loadstring    = 0x38BEF0;
constexpr std::uintptr_t luaL_loadbuffer    = 0x38BD08;
constexpr std::uintptr_t luaL_gettop	    = 0x391318;
constexpr std::uintptr_t luaL_checkstring   = 0x38B508;
constexpr std::uintptr_t luaL_checkversion  = 0x38B740;
constexpr std::uintptr_t luaL_argerror		= 0x38B2A0;
constexpr std::uintptr_t luaL_optstring	    = 0x38C14C;

// luaD_
constexpr std::uintptr_t luaD_protectedparser = 0x38C14C;

// luaG_
constexpr std::uintptr_t luaG_runerror		= 0x389574;
constexpr std::uintptr_t luaG_typeerror		= 0x3895C8;

// luaT_
constexpr std::uintptr_t luaT_gettmbyobj	= 0x38DCDC;

// luaV_
constexpr std::uintptr_t luaV_settable		= 0x38FF21;

// luaZ_
constexpr std::uintptr_t luaZ_init			= 0x38FF20;