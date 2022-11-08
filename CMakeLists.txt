# CMakeList.txt: проект CMake для laba7; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

set(PROJECT_NAME laba7)
project ("${PROJECT_NAME}")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

# Добавьте источник в исполняемый файл этого проекта.
add_executable ("${PROJECT_NAME}" laba7.cpp
									Source.cpp
									Source.h)

file(COPY input.txt DESTINATION "/")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
