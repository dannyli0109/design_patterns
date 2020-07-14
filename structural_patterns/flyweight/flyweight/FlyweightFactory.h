#pragma once
#include "Flyweight.h"
#include <unordered_map>
class FlyweightFactory {
private:
	std::unordered_map<std::string, Flyweight*> cache;
	std::string GetKey(std::string brand, std::string model, std::string color) const {
		return brand + "_" + model + "_" + color;
	}
public:
	Flyweight* GetFlyweight(std::string brand, std::string model, std::string color) {
		if (!cache[GetKey(brand, model, color)]) {
			SharedState* ss = new SharedState(brand, model, color);
			std::cout << "new shared state created: " << *ss << std::endl;
			cache[GetKey(brand, model, color)] = new Flyweight(ss);
		}
		return cache[GetKey(brand, model, color)];
	}
};