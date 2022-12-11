cmake_minimum_required(VERSION 3.10)

project (cuda_pybind
	VERSION 0.1
	DESCRIPTION "A very basic pybind project")

# Weird that this is pybind's recommended way to do it
# but I guess since it's a header only library it makes sense
add_subdirectory(extern/pybind11)

pybind11_add_module(${PROJECT_NAME} src/adder.cpp src/module_adds.cpp)

target_compile_definitions(${PROJECT_NAME}
                           PRIVATE VERSION_INFO=0.0.1)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/lib)
