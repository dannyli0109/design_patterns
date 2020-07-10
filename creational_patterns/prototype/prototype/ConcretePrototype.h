#pragma once

#include "Prototype.h"

class ConcretePrototype : public Prototype {
private:
	int field1 = 0;
public:
	ConcretePrototype(int field1) : field1(field1), Prototype() {}
	ConcretePrototype(ConcretePrototype* prototype) {
		field1 = prototype->field1;
	}
	Prototype* Clone() override {
		return new ConcretePrototype(this);
	}
	int GetField1() const{
		return field1;
	}

	void SetField1(int n) {
		field1 = n;
	}
};