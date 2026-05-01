file(GLOB_RECURSE SOURCES *.cpp)
add_library(celastro STATIC ${SOURCES})
target_include_directories(celastro PUBLIC .)
