#pragma once
#include "GUIFactory.h"
#include "../Button/MacButton.h"
#include "../Checkbox/MacCheckbox.h"

class MacFactory : public GUIFactory {
public:
	virtual Button* CreateButton() const override {
		return new MacButton();
	}
	virtual Checkbox* CreateCheckbox() const override {
		return new MacCheckbox();
	}
};