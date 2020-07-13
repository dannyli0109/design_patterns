#pragma once
#include "Subsystem1.h"
#include "Subsystem2.h"
class Facade {
protected:
	Subsystem1* s1 = nullptr;
	Subsystem2* s2 = nullptr;
public:
	Facade() : s1(new Subsystem1), s2(new Subsystem2){}
	~Facade() {
		delete s1;
		delete s2;
	}

	std::string Operation() {
		std::string result = "Facade initializes subsystems:\n";
		result += s1->Operation1();
		result += s2->Operation1();
		result += "Facade orders subsystems to perform the action:\n";
		result += s1->OperationN();
		result += s2->OperationZ();
		return result;
	}
};