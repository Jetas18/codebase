# CMakeLists.txt

cmake_minimum_required(VERSION 3.0.0)
project(Codebase VERSION 0.1.0 LANGUAGES C)

include(CTest)
enable_testing()

# Add all source files in the includes directory to the library
file(GLOB LIB_SOURCES "includes/*.c")
add_library(Codebase ${LIB_SOURCES})
target_include_directories(Codebase PUBLIC ./includes)

# Set source files explicitly for the main executable
add_executable(main main.c)

# Link the Codebase library to the main executable and against the math library
target_link_libraries(main PRIVATE Codebase m)
