#include <iostream>
#include "config.h"

#include "adder.h"

#include <pybind11/pybind11.h>

namespace py = pybind11;


int tmp_add(int a, int b){
	return a+b;
}

PYBIND11_MODULE(example, m) {
    m.doc() = "pybind11 example plugin"; // optional module docstring

    m.def("tmp_add", &tmp_add, "A function that adds two numbers");
}


int main(int argc, char **argv) {
	std::cout << "Hello World" << std::endl;
	//std::cout << "Version gaaah " << cuda_pybind_VERSION_MAJOR << "." << cuda_pybind_VERSION_MINOR << std::endl;


	return 0;
}
