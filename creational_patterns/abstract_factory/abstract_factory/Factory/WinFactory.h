#pragma once
#include "GUIFactory.h"
#include "../Button/WinButton.h"
#include "../Checkbox/WinCheckbox.h"

class WinFactory : public GUIFactory{
public:
	virtual Button* CreateButton() const override {
		return new WinButton();
	}
	virtual Checkbox* CreateCheckbox() const override {
		return new WinCheckbox();
	}
};