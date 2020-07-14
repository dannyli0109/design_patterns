#pragma once
#include <string>
#include <ostream>
struct UniqueState {
	std::string owner;
	std::string plates;

	UniqueState(const std::string& owner, const std::string& plates)
		: owner(owner), plates(plates) {}

	friend std::ostream& operator<<(std::ostream& os, const UniqueState& us) {
		return os << "[ " << us.owner << " , " << us.plates << " ]";
	}
};