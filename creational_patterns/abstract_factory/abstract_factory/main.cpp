#include "Factory/MacFactory.h"
#include "Factory/WinFactory.h"


int main() {
	MacFactory* macFactory = new MacFactory();
	Button* macButton = macFactory->CreateButton();
	Checkbox* macCheckbox = macFactory->CreateCheckbox();

	WinFactory* winFactory = new WinFactory();
	Button* winButton = winFactory->CreateButton();
	Checkbox* winCheckbox = winFactory->CreateCheckbox();

	macButton->Paint();
	macCheckbox->Paint();
	winButton->Paint();
	winCheckbox->Paint();
}