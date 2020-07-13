#pragma once
#include <string>
class Subsystem1 {
public:
	std::string Operation1() const {
		return "Subsystem1: Ready!\n";
	}

	std::string OperationN() const {
		return "Subsystem1: Go!\n";
	}
};