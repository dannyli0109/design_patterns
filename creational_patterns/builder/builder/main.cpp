#include "Director.h"
#include "ConcreteBuilder1.h"
#include "ConcreteBuilder2.h"
#include <iostream>
int main () {
	ConcreteBuilder1* b1 = new ConcreteBuilder1;
	Director* d = new Director(b1);
	d->Make();
	Product1* p1 = b1->GetResult();
	std::cout << "A: " << p1->GetA() << std::endl;
	std::cout << "B: " << p1->GetB() << std::endl;
	std::cout << "C: " << p1->GetC() << std::endl;

	ConcreteBuilder2* b2 = new ConcreteBuilder2;
	d->ChangeBuilder(b2);
	d->Make();
	Product2* p2 = b2->GetResult();
	std::cout << "A: " << p2->GetA() << std::endl;
	std::cout << "B: " << p2->GetB() << std::endl;
	std::cout << "C: " << p2->GetC() << std::endl;

	delete b1;
	delete b2;
	delete d;
}