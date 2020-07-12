#pragma once
#include "Implementation.h"

class Abstraction {
protected:
	Implementation* i;
public:
	Abstraction(Implementation* i): i(i) {}
	virtual void Feature1() const {
		i->Method1();
	}
	virtual void Feature2() const {
		i->Method2();
		i->Method3();
	}
};