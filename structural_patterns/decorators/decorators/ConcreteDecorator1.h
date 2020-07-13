#pragma once
#include "BaseDecorator.h"

class ConcreteDecorator1 : public BaseDecorator {
public:
	ConcreteDecorator1(Component* c) : BaseDecorator(c) {}
	void Extra() const {
		std::cout << "Concrete Decorator 1" << std::endl;
	}
	void Execute() const override {
		BaseDecorator::Execute();
		Extra();
	}
};