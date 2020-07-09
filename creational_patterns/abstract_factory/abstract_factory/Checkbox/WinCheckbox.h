#pragma once
#include "Checkbox.h"

class WinCheckbox : public Checkbox {
	virtual void Paint() const override {
		std::cout << "Win Checkbox" << std::endl;
	}
};