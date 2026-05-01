file(GLOB_RECURSE SOURCES *.cpp)
add_library(celephem STATIC ${SOURCES})
target_include_directories(celephem PUBLIC . ${CMAKE_SOURCE_DIR}/fmt/include ${CMAKE_SOURCE_DIR}/eigen)
target_link_libraries(celephem PRIVATE celmath celastro fmt Eigen3)
