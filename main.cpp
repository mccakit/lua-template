extern "C" {
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
}
import std;

int main() {
    lua_State* L = luaL_newstate();
    if (!L) {
        std::cerr << "Failed to create Lua state" << std::endl;
        return 1;
    }

    luaL_openlibs(L);

    // Execute Lua file
    if (luaL_dofile(L, "hello.lua") != LUA_OK) {
        std::cerr << "Error: " << lua_tostring(L, -1) << std::endl;
        lua_pop(L, 1);
        lua_close(L);
        return 1;
    }

    lua_close(L);
    return 0;
}
