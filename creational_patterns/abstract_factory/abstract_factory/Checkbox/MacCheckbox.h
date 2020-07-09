#pragma once
#include "Checkbox.h"

class MacCheckbox : public Checkbox {
	virtual void Paint() const override {
		std::cout << "Mac Checkbox" << std::endl;
	}
};