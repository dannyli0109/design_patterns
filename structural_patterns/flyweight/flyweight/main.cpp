#include "FlyweightFactory.h"
#include "Context.h"

int main() {
	FlyweightFactory* factory = new FlyweightFactory();
	Context* context1 = new Context(factory, "brand1", "model1", "red", new UniqueState("owner1", "plate1"));
	Context* context2 = new Context(factory, "brand2", "model2", "blue", new UniqueState("owner2", "plate2"));
	Context* context3 = new Context(factory, "brand3", "model3", "green", new UniqueState("owner3", "plate3"));
	Context* context4 = new Context(factory, "brand4", "model4", "black", new UniqueState("owner4", "plate4"));
	Context* context5 = new Context(factory, "brand5", "model5", "silver", new UniqueState("owner5", "plate5"));
	Context* context6 = new Context(factory, "brand2", "model2", "blue", new UniqueState("owner6", "plate6"));

	context1->Operation();
	context2->Operation();
	context3->Operation();
	context4->Operation();
	context5->Operation();
	context6->Operation();

	delete context1;
	delete context2;
	delete context3;
	delete context4;
	delete context5;
	delete context6;

	delete factory;

}