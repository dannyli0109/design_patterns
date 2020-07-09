#pragma once

#include "Button.h"

class WinButton : public Button {
	virtual void Paint() const override {
		std::cout << "Win Button" << std::endl;
	}
};