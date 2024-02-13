cmake_minimum_required(VERSION 3.28.3)

project(LightYears
    VERSION 1.0.0  
    LANGUAGES C CXX
)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(LightYearsGame
   ${CMAKE_CURRENT_SOURCE_DIR}/Game/src/main.cpp
)