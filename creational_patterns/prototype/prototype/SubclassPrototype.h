#pragma once

#include "ConcretePrototype.h"

class SubclassPrototype : public ConcretePrototype {
private:
	int field2 = 0;
public:
	SubclassPrototype(int field1, int field2) : field2(field2), ConcretePrototype(field1) {}
	SubclassPrototype(SubclassPrototype* prototype) 
		: ConcretePrototype(prototype) {
		this->field2 = prototype->field2;
	}
	Prototype* Clone() override {
		return new SubclassPrototype(this);
	}
	int GetField2() const {
		return field2;
	}
	void SetField2(int n) {
		field2 = n;
	}
};