cmake_minimum_required(VERSION 3.27)
project(Testing)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

find_package(OpenSSL REQUIRED)

include_directories(.)

add_executable(Testing
        DemoTesting/HelloWorld.cpp
        DemoTesting/HelloWorld.h
        DemoTesting/Main.cpp)

# Link OpenSSL to your target
target_link_libraries(Testing OpenSSL::SSL)
