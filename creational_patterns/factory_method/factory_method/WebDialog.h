#pragma once
#include "Dialog.h"
#include "HTMLButton.h"

class WebDialog : public Dialog{
public:
	virtual Button* CreateButton() const override {
		return new HTMLButton();
	}
};