#include "Dialog.h"
#include "WindowsDialog.h"
#include "WebDialog.h"

#define _CRTDBG_MAP_ALLOC  
#include <stdlib.h>  
#include <crtdbg.h>  

int main() {
	{
		Dialog* dialog1 = new WindowsDialog();
		Dialog* dialog2 = new WebDialog();

		dialog1->render();
		dialog2->render();

		delete dialog1;
		delete dialog2;
	}
	_CrtDumpMemoryLeaks();
}