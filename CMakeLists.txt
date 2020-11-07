cmake_minimum_required(VERSION 3.0.0)

set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_COMPILER clang++)

project(pathing VERSION 0.1.0)

include(CTest)
enable_testing()

find_package (Freetype REQUIRED)
find_package(Fontconfig REQUIRED)
find_package (OpenGL REQUIRED)
find_package (SDL2 REQUIRED)

add_executable(pathing main.cpp)

target_include_directories(pathing PUBLIC ${SKIA_INCLUDE_DIR}) #include path
target_link_libraries(pathing PUBLIC ${SKIA_LIBRARY} # file path
${OPENGL_LIBRARIES}
Fontconfig::Fontconfig
Freetype::Freetype
pthread
SDL2::SDL2
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
