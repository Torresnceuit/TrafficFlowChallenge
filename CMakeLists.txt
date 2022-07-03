cmake_minimum_required(VERSION 2.8)

project(TrafficFlowManager)
add_executable(${PROJECT_NAME} "TrafficFlowManager.cpp")
target_link_libraries(${PROJECT_NAME} Controller)
add_subdirectory(Controller)
