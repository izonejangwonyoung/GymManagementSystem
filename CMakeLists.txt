cmake_minimum_required(VERSION 3.19)
project(GymManagementSystem C)

set(CMAKE_C_STANDARD 99)

set(CMAKE_CXX_FLAGS "-fexec-charset=CP949")
add_executable(GymManagementSystem main.c example.c)