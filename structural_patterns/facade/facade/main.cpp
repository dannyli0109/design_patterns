#include "Facade.h"
#include <iostream>

int main() {
	Facade* f = new Facade();
	std::cout << f->Operation();

	delete f;
}