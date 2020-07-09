#pragma once
#include "../Button/Button.h"
#include "../Checkbox/Checkbox.h"
class GUIFactory {
public:
	virtual Button* CreateButton() const = 0;
	virtual Checkbox* CreateCheckbox() const = 0;
};