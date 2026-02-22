cmake_minimum_required(VERSION 4.0)

project(VeRend LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(lib/sdl3)
add_subdirectory(lib/glm)

add_subdirectory(engine)
add_subdirectory(sandbox)