#pragma once

#include <iostream>
class Service {
public:
	virtual void ServiceMethod(double specialData) const{
		std::cout << "Adapted: " <<  specialData << std::endl;
	}
};