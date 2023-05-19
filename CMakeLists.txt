cmake_minimum_required(VERSION 3.17)
project(test)

set(CMAKE_CXX_STANDARD 20)
find_package(Boost REQUIRED)

add_executable(test main.cpp)
target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES})