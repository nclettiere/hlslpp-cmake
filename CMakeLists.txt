cmake_minimum_required(VERSION 3.14)

project(hlslpp CXX)

set(PWD "${CMAKE_CURRENT_SOURCE_DIR}")

file(GLOB_RECURSE HLSLPP_HEADERS CONFIGURE_DEPENDS
  ${PWD}/include/**.h
)

add_library(
	${PROJECT_NAME} INTERFACE
	${HLSLPP_HEADERS}
)

target_include_directories(
	${PROJECT_NAME} INTERFACE
	"${PWD}/include"
	"$<BUILD_INTERFACE:${PWD}/include>"
)
