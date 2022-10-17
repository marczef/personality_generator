cmake_minimum_required(VERSION 3.13)
project(implementation)

set(CMAKE_CXX_STANDARD 17)

include_directories(
        include
)

set(SOURCE_FILES
        src/human.cpp
        src/trait.cpp
        src/parents/parent.cpp
        src/parents/mother.cpp
        src/parents/father.cpp
        )

add_executable(personality_generator ${SOURCE_FILES} main.cpp)