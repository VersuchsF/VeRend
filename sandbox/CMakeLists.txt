project(VeRend_SANDBOX LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(VeRend_SANDBOX)

target_link_libraries(VeRend_SANDBOX PRIVATE VeRend_ENGINE)

target_include_directories(VeRend_SANDBOX PUBLIC "${CMAKE_SOURCE_DIR}/engine/include")

target_sources(VeRend_SANDBOX PRIVATE
    src/main.cpp
)

set_target_properties(VeRend_SANDBOX PROPERTIES OUTPUT_NAME sandbox)
