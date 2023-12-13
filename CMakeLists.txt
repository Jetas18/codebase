cmake_minimum_required(VERSION 3.0.0)
project(Codebase VERSION 0.1.0 LANGUAGES C)

include(CTest)
enable_testing()

# Use target_include_directories instead of include_directories
# and specify the target for which the include directories are intended
add_library(Codebase includes/Codebase.c)

# Instead of using include_directories, use target_include_directories for the library
target_include_directories(Codebase PUBLIC ./includes)

# Set source files explicitly for the main executable
add_executable(main main.c)

# Link the Codebase library to the main executable
target_link_libraries(main PRIVATE Codebase)

# CPack configurations
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
