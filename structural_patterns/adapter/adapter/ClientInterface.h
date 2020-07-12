#pragma once
#include <iostream>
class ClientInterface {
public:
	virtual void Method(int data) const {
		std::cout << "Default behavior: " << data << std::endl;
	}
};