#pragma once
#include "Abstraction.h"

class RefinedAbstraction : public Abstraction {
public:
	RefinedAbstraction(Implementation* i) : Abstraction(i){}
	void FeatureN() {
		i->MethodN();
		i->MethodM();
	}
};