#pragma once
#include "Button.h"

class HTMLButton : public Button {
public:
	virtual void Render() override{
		std::cout << "render HTML button" << std::endl;
	}
	virtual void OnClick(std::function<void(void*)> func) const override{}
};
