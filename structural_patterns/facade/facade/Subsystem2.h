#pragma once
#include <string>
class Subsystem2 {
public:
	std::string Operation1() const {
		return "Subsystem2: Ready!\n";
	}

	std::string OperationZ() const {
		return "Subsystem2: Fire!\n";
	}
};