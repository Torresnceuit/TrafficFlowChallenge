cmake_minimum_required(VERSION 2.8)

project(Controller)

set(CONTROLLER_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

set(
	CONTROLLERS_FILES
	${CONTROLLER_SOURCE_DIR}/FlowController.cpp
	${CONTROLLER_SOURCE_DIR}/FlowController.h
	${CONTROLLER_SOURCE_DIR}/Utils.cpp
	${CONTROLLER_SOURCE_DIR}/Utils.h
	${CONTROLLER_SOURCE_DIR}/ControlMethods/BaseMehod.cpp
	${CONTROLLER_SOURCE_DIR}/ControlMethods/BaseMethod.h
	${CONTROLLER_SOURCE_DIR}/ControlMethods/Roundabout.cpp
	${CONTROLLER_SOURCE_DIR}/ControlMethods/Roundabout.h
	${CONTROLLER_SOURCE_DIR}/ControlMethods/StopSignal.cpp
	${CONTROLLER_SOURCE_DIR}/ControlMethods/StopSignal.h
	${CONTROLLER_SOURCE_DIR}/ControlMethods/TrafficLights.cpp
	${CONTROLLER_SOURCE_DIR}/ControlMethods/TrafficLights.h
)

add_library(${PROJECT_NAME} ${CONTROLLERS_FILES})
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)

target_include_directories(
	${PROJECT_NAME}
	PUBLIC
		${CONTROLLER_SOURCE_DIR}
)

#add_subdirectory(tests)
