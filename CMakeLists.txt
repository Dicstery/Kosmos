cmake_minimum_required(VERSION 3.10)
project(Kosmos)

if(NOT EMSCRIPTEN)
    message(FATAL_ERROR "Этот CMake-файл предназначен только для сборки с Emscripten. Установите Emscripten и используйте emcmake cmake ..")
endif()

add_subdirectory(src/celmath)
add_subdirectory(src/celutil)
add_subdirectory(src/celastro)
add_subdirectory(src/celephem)
add_subdirectory(src/celengine)

add_executable(kosmos src/main.cpp)

target_link_libraries(kosmos PRIVATE
    celengine
    celastro
    celephem
    celmath
    celutil
)

set_target_properties(kosmos PROPERTIES
    SUFFIX ".html"
    LINK_FLAGS "-s WASM=1 -s EXPORTED_FUNCTIONS='[\"_getStarCount\",\"_getStarPosition\"]' -s EXTRA_EXPORTED_RUNTIME_METHODS='[\"ccall\",\"cwrap\"]'"
)