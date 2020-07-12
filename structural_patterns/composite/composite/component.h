#pragma once

class Component {
protected:
	Component* parent;
public:
	void SetParent(Component* parent) {
		this->parent = parent;
	}
	virtual ~Component() {};
	virtual void Execute() const = 0;
	virtual void Add(Component* component) {}
	virtual void Remove(Component* component) {}
	virtual bool IsComposite() const {
		return false;
	}
};