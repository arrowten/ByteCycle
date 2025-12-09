cmake_minimum_required(VERSION 3.25)
project(ByteCycle LANGUAGES CXX)

# Require C++23
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable warnings for good development hygiene
if (MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Create the executable target
add_executable(bytecycle
    sources/main.cxx
)

# Include directory so headers are accessible
target_include_directories(bytecycle PRIVATE include)