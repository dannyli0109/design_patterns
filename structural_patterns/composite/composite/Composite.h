#pragma once
#include "component.h"
#include <list>
#include <iostream>

class Composite : public Component{
private:
	std::list<Component*> children;
public:
	void Add(Component* c) override{
		children.push_back(c);
	}

	void Remove(Component* c) override {
		children.remove(c);
		c->SetParent(nullptr);
	}

	std::list<Component*> GetChildren() const{
		return children;
	}

	void Execute() const override {
		std::cout << "Components: " << std::endl;
		for (Component* c : children) {
			c->Execute();
		}
	}

	bool IsComposite() const override {
		return true;
	}
};
