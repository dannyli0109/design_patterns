#include "Abstraction.h"
#include "RefinedAbstraction.h"
#include "Implementation.h"
#include "ConcreteImplementation1.h"
#include "ConcreteImplementation2.h"

int main() {
	Implementation* i1 = new ConcreteImplementation1();
	Implementation* i2 = new ConcreteImplementation2();
	Abstraction* a1 = new Abstraction(i1);
	Abstraction* a2 = new RefinedAbstraction(i2);
	a1->Feature1();
	a1->Feature2();
	a2->Feature1();
	a2->Feature2();
}