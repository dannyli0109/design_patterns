#pragma once
#include <iostream>

class Checkbox {
public:
	~Checkbox() {}
	virtual void Paint() const = 0;
};