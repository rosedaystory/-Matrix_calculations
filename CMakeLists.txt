cmake_minimum_required(VERSION 3.8)
project(Matrice_calculation)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp TBOMatrix.cpp TBOMatrix.h)
add_executable(Matrice_calculation ${SOURCE_FILES})