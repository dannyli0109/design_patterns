#pragma once
#include <iostream>

class Button {
public:
	~Button() {}
	virtual void Paint() const = 0;
};