#pragma once

class Component {
public:
	virtual ~Component() {}
	virtual void Execute() const = 0;
};