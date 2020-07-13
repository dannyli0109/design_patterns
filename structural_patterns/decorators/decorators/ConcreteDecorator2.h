#pragma once
#include "BaseDecorator.h"

class ConcreteDecorator2 : public BaseDecorator {
public:
	ConcreteDecorator2(Component* c) : BaseDecorator(c) {}
	void Extra() const {
		std::cout << "Concrete Decorator 2" << std::endl;
	}
	void Execute() const override {
		BaseDecorator::Execute();
		Extra();
	}
};