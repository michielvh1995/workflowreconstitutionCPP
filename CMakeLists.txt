cmake_minimum_required(VERSION 3.10)
project(Thesis)

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
