#pragma once
#include "component.h"
#include <iostream>

class Leaf : public Component{
public:
	void Execute() const override {
		std::cout << "leaf node" << std::endl;
	}
};