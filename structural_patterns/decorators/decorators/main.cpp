#include "ConcreteComponent.h"
#include "ConcreteDecorator1.h"
#include "ConcreteDecorator2.h"

int main() {
	Component* a = new ConcreteComponent();
	Component* b = new ConcreteDecorator1(a);
	Component* c = new ConcreteDecorator2(b);
	c->Execute();

	delete c;
	delete b;
	delete a;
}