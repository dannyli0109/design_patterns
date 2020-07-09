#pragma once
#include <functional>

class Button {
public:
	virtual ~Button() {}
	virtual void Render() {}
	virtual void OnClick(std::function<void(void*)> func) const = 0;
};