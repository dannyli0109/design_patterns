#pragma once
#include "Prototype.h"
#include <unordered_map>
#include <string>
#include "ConcretePrototype.h"
#include "SubclassPrototype.h"

class PrototypeRegistry {
private:
	std::unordered_map<std::string, Prototype*> prototypes;
public:
	PrototypeRegistry() {
		prototypes["concrete"] = new ConcretePrototype(10);
		prototypes["subclass"] = new SubclassPrototype(22, 33);
	}

	~PrototypeRegistry() {
		delete prototypes["concrete"];
		delete prototypes["subclass"];
	}

	Prototype* CreatePrototype(std::string str) {
		return prototypes[str]->Clone();
	}
};