#pragma once
#include "Component.h"
#include <iostream>

class BaseDecorator : public Component{
private:
	Component* wrapee;
public:
	BaseDecorator(Component* c) : wrapee(c) {}
	virtual void Execute() const override {
		wrapee->Execute();
	}
};