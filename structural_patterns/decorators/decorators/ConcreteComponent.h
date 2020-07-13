#pragma once
#include "Component.h"
#include <iostream>
class ConcreteComponent : public Component {
public:
	void Execute() const override {
		std::cout << "Concrete Component" << std::endl;
	}
};