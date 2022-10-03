cmake_minimum_required(VERSION 3.6)

# Set the project name
project (Main)

# Create a sources variable with a link to all cpp files to compile
set(SOURCES
	Point3D.cpp
	Point3D.hpp
	Point3D_main.cpp
)

add_executable(Main ${SOURCES})