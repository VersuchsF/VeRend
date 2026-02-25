project(VeRend_ENGINE VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(VeRend_ENGINE SHARED)

target_sources(VeRend_ENGINE PRIVATE
    src/engine.cpp
)

set_target_properties(VeRend_ENGINE PROPERTIES OUTPUT_NAME verend)

target_link_libraries(VeRend_ENGINE PRIVATE SDL3::SDL3)
target_link_libraries(VeRend_ENGINE PRIVATE glm::glm)

target_include_directories(VeRend_ENGINE PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
target_include_directories(VeRend_ENGINE PUBLIC "${CMAKE_SOURCE_DIR}lib/sdl3/include")

configure_file("${CMAKE_CURRENT_SOURCE_DIR}/config.h.in" "${CMAKE_CURRENT_SOURCE_DIR}/include/config.h" @ONLY)
