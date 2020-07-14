#pragma once
#include "SharedState.h"
#include "UniqueState.h"
#include <iostream>
class Flyweight {
private:
	SharedState* ss = nullptr;
public:
	~Flyweight() {
		delete ss;
	}
	Flyweight(SharedState* ss) : ss(ss) {}
	void Operation(UniqueState* us) {
		std::cout << "unique state: " << *us << std::endl;
		std::cout << "shared state: " << *ss << std::endl;
	}
};