#pragma once
#include "UniqueState.h"
#include "SharedState.h"
#include "FlyweightFactory.h"
#include "Flyweight.h"
class Context {
private:
	UniqueState* us;
	Flyweight* flyweight;
	
public:
	~Context() {
		delete us;
	}
	Context(FlyweightFactory* factory, std::string brand, std::string model, std::string color, UniqueState* us) {
		this->us = us;
		this->flyweight = factory->GetFlyweight(brand, model, color);
	}
	void Operation() const {
		flyweight->Operation(us);
	}
};