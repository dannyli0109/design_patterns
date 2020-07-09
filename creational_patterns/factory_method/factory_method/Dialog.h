#pragma once
#include "Button.h"

void CloseDialog(void* obj) {}

class Dialog {
public:
	virtual ~Dialog() {};
	virtual void render() const {
		Button* okButton = CreateButton();
		okButton->OnClick(CloseDialog);
		okButton->Render();
		delete okButton;
	}
	virtual Button* CreateButton() const = 0;
};