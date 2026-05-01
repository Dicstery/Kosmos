file(GLOB_RECURSE SOURCES *.cpp)
add_library(celephem STATIC ${SOURCES})
target_include_directories(celephem PUBLIC .)
