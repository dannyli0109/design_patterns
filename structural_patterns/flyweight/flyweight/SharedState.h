#pragma once
#include <string>
#include <ostream>

struct SharedState {
	std::string brand;
	std::string model;
	std::string color;

	SharedState(const std::string& brand, const std::string& model, const std::string& color)
		:brand(brand), model(model), color(color) {}

	friend std::ostream& operator <<(std::ostream& os, const SharedState& ss) {
		return os << "[ " << ss.brand << " , " << ss.model << " , " << ss.color << " ]";
	}
};