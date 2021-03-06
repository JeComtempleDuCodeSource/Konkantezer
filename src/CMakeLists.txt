cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(Konkantezer VERSION 0.9.1)

# Configure version
configure_file("${CMAKE_CURRENT_LIST_DIR}/KonkantezerVersion.h.in" "${CMAKE_CURRENT_LIST_DIR}/KonkantezerVersion.h")

# Reduce redundancy
set(Konkantezer-Src-List 
                "${CMAKE_CURRENT_LIST_DIR}/main.c"
                "${CMAKE_CURRENT_LIST_DIR}/Konkantezer.c"
                "${CMAKE_CURRENT_LIST_DIR}/DirScanUtil.c"
)

# Add icon if windows
if (WIN32)
        add_executable(Konkantezer 
                        "${Konkantezer-Src-List}"
                        "${CMAKE_CURRENT_LIST_DIR}/Konkantezer.rc"
        )
# If not windows
else()
        add_executable(Konkantezer 
                        "${Konkantezer-Src-List}"
        )
endif()

# Includes
target_include_directories(Konkantezer PUBLIC "${CMAKE_CURRENT_LIST_DIR}")

# Flags
target_compile_options(Konkantezer PUBLIC "-Wall" "-O2")

# Specify the C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)