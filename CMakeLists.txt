cmake_minimum_required(VERSION 4.2)
set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD "d0edc3af-4c50-42ea-a356-e2862fe7a444")
set(CMAKE_CXX_MODULE_STD ON)
project(
    LuaTemplate
    VERSION 0.0
    DESCRIPTION "Lmao"
    LANGUAGES C CXX
)

set(CMAKE_PREFIX_PATH "${CMAKE_CURRENT_SOURCE_DIR}/conan")
set(ENV{PKG_CONFIG_LIBDIR} "${CMAKE_CURRENT_SOURCE_DIR}/conan")
add_executable(main main.cpp)
find_package(lua REQUIRED)
target_link_libraries(main PRIVATE lua::lua)
