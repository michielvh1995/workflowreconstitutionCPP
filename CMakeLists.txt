cmake_minimum_required(VERSION 3.10)
project(Thesis)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_CXX_FLAGS "-Wall -Wextra")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# Include headers
include_directories(include)

# We set the variable SOURCES to the set of source files
# Include a file as source:
#set(SOURCES src/main.cpp)

# Include a directory as source, using file(GLOB with wildcards for .cpp files):
file(GLOB SOURCES "src/*.cpp")

# Using variables SOURCES is done with ${NAME}
add_executable(reconstitute ${SOURCES})


# Followed this tutorial on:
# http://derekmolloy.ie/hello-world-introductions-to-cmake/


find_package(OpenMP)
if(OpenMP_CXX_FOUND)
    target_link_libraries(reconstitute PUBLIC OpenMP::OpenMP_CXX)
endif()
