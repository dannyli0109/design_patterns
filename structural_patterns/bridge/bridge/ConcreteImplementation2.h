#pragma once
#include "Implementation.h"
#include <iostream>
class ConcreteImplementation2 : public Implementation {
public:
	void Method1() const override {
		std::cout << "2: Method1" << std::endl;
	}
	void Method2() const override {
		std::cout << "2: Method2" << std::endl;
	}
	void Method3() const override {
		std::cout << "2: Method3" << std::endl;
	}
	void MethodN() const override {
		std::cout << "2: MethodN" << std::endl;
	}
	void MethodM() const override {
		std::cout << "2: MethodM" << std::endl;
	}
};