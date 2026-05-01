file(GLOB_RECURSE SOURCES *.cpp)
add_library(celengine STATIC ${SOURCES})
target_include_directories(celengine PUBLIC . ${CMAKE_SOURCE_DIR}/fmt/include)
target_link_libraries(celengine PRIVATE celmath celastro celephem celutil fmt)
