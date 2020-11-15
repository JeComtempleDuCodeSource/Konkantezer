cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(Konkantezer VERSION 0.9)

# Configure version
configure_file(CMake.h.in CMake.h)

# Add the executable
add_executable(Konkantezer 
                main.c
                Konkantezer.c
                directScanUtil.c
)

# Flags
target_compile_options(Konkantezer PUBLIC "-Wall" "-O2")

# Includes
target_include_directories(Konkantezer PUBLIC "${PROJECT_BINARY_DIR}")

# Specify the C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)