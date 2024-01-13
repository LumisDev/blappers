cmake_minimum_required(VERSION 3.12)
project(blappers LANGUAGES CXX)

# Set C++ version
set(CMAKE_CXX_STANDARD 14)

# Add SFML and Box2D as subdirectories
add_subdirectory(submodules/SFML)
add_subdirectory(submodules/Box2D)


# Add your executable
add_executable(blappers WIN32 ./src/main.cpp)


# Link SFML and Box2D libraries
target_link_libraries(blappers sfml-graphics sfml-window sfml-system Box2D)
target_include_directories(blappers BEFORE PRIVATE ${SFML_INCLUDE_DIR} PRIVATE ${BOX2D_INCLUDE_DIR})
