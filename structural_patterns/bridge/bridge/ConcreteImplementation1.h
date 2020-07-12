#pragma once
#include "Implementation.h"
#include <iostream>
class ConcreteImplementation1 : public Implementation {
public:
	void Method1() const override {
		std::cout << "1: Method1" << std::endl;
	}
	void Method2() const override {
		std::cout << "1: Method2" << std::endl;
	}
	void Method3() const override {
		std::cout << "1: Method3" << std::endl;
	}
	void MethodN() const override {
		std::cout << "1: MethodN" << std::endl;
	}
	void MethodM() const override {
		std::cout << "1: MethodM" << std::endl;
	}
};