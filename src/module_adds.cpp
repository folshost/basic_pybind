/*
 * module_adds.cpp
 *
 *  Created on: Dec 7, 2022
 *      Author: maxwell
 */

#include "adder.h"

#include <pybind11/pybind11.h>

namespace py = pybind11;

// Okay, so it turns out the name here needs to be for the module added in the cmake lists file
PYBIND11_MODULE(cuda_pybind, m) {
    py::class_<Add>(m, "Add")
        .def(py::init<>())
        .def("__call__", &Add::operator())
	.def_readwrite("prev", &Add::prev);
}


