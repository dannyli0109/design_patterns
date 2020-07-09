#pragma once
#include "Button.h"

class MacButton : public Button {
	virtual void Paint() const override{
		std::cout << "Mac Button" << std::endl;
	}
};