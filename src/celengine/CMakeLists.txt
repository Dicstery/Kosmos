file(GLOB_RECURSE SOURCES *.cpp)
add_library(celengine STATIC ${SOURCES})
target_include_directories(celengine PUBLIC .)
