cmake_minimum_required(VERSION 3.16) # for cuda its 3.18
project(YourProjectName)

# external lib example: opencv
# find_package(OpenCV REQUIRED)

set(CMAKE_CXX_STANDARD 14)

# sub folder example
add_subdirectory(node)
add_subdirectory(dll)

add_executable(main main.cpp)

# external lib example: opencv
# target_link_libraries(main ${OpenCV_LIBS})

target_link_libraries(main node dll)
