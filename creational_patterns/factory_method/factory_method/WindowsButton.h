#pragma once
#include "Button.h"
#include <iostream>

class WindowsButton : public Button {
public:
	virtual void Render() override {
		std::cout << "render windows button" << std::endl;
	}
	virtual void OnClick(std::function<void(void*)> func) const override {}
};