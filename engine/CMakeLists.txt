project(VeRend_ENGINE)

add_library(VeRend_ENGINE STATIC)

target_sources(VeRend_ENGINE PRIVATE
	src/engine.cpp
)

set_target_properties(VeRend_ENGINE PROPERTIES OUTPUT_NAME verend)

target_link_libraries(VeRend_ENGINE PRIVATE SDL3::SDL3)
target_link_libraries(VeRend_ENGINE PRIVATE glm::glm)

target_include_directories(VeRend_ENGINE PUBLIC "include")
target_include_directories(VeRend_ENGINE PUBLIC "${CMAKE_SOURCE_DIR}lib/sdl3/include")