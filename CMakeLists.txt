# command line switches: 
# use BOOST.TESTs?  -DUBTS:BOOL=OFF / -DUBTS:BOOL=ON


cmake_minimum_required ( VERSION 3.16 )

cmake_policy (SET CMP0048 NEW)

project (NQUEENS_PUZZLE VERSION 1.0 DESCRIPTION "N-Queens Puzzle" LANGUAGES CXX)
include (CMake)

message( STATUS "--- CMAKE PROJECT ${CMAKE_PROJECT_NAME} ---")
message( STATUS "--- PROJECT       ${PROJECT_NAME} ---")

cmake_policy (SET CMP0074 NEW)

SET( UBTS OFF CACHE STRING "Use BOOST.TEST tests ?" )

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_subdirectory (src)

if( CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    add_subdirectory (apps)
	
	if( UBTS)
        find_package (Boost REQUIRED)
        enable_testing ()
        add_subdirectory (tests)
	endif()
endif()
