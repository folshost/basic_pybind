/*
 * adder.cpp
 *
 *  Created on: Dec 7, 2022
 *      Author: maxwell
 */


#include "adder.h"


Add::Add(){
	this->prev = 0;
}

int Add::operator()(int a, int b){
	int tmp = a + b;
	this->prev = tmp;
	return tmp;
}


