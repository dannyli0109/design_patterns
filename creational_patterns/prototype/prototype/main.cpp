
#include "PrototypeRegistry.h"
#include <iostream>

int main() {
	PrototypeRegistry* prototypeFactory = new PrototypeRegistry();
	Prototype* c1 = prototypeFactory->CreatePrototype("concrete");
	std::cout << "c1: " << dynamic_cast<ConcretePrototype*>(c1)->GetField1() << std::endl;

	Prototype* c2 = prototypeFactory->CreatePrototype("subclass");
	std::cout << "c2: " << dynamic_cast<SubclassPrototype*>(c2)->GetField1() << std::endl;
	std::cout << "c2: " << dynamic_cast<SubclassPrototype*>(c2)->GetField2() << std::endl;

	delete c1;
	delete c2;
}