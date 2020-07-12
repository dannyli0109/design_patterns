#include "Leaf.h"
#include "Composite.h"

int main() {
	Component* root = new Composite();
	Component* a = new Leaf();
	Component* b = new Composite();
	Component* c = new Leaf();
	Component* d = new Leaf();
	root->Add(a);
	b->Add(c);
	b->Add(d);
	root->Add(b);
	root->Execute();

	root->Remove(b);
	root->Execute();

	delete root;
	delete a;
	delete b;
	delete c;
	delete d;
}
