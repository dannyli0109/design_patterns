#pragma once

#include "Dialog.h"
#include "WindowsButton.h"
class WindowsDialog : public Dialog{
public:
	Button* CreateButton() const override{
		return new WindowsButton;
	}
};