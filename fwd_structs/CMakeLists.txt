cmake_minimum_required(VERSION 3.16)

project(Project)

set(CMAKE_CXX_STANDARD 17)

file(GLOB CPP
		"src/*"
		)

file(GLOB H
		"include/*"
		)


add_library(QT_VIEW ${CPP} ${H})
target_include_directories(QT_VIEW PUBLIC include)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} QT_VIEW)
