#pragma once

class Product2 {
	int a = 0, b = 0, c = 0;
public:
	void SetA(int n) {
		a = n;
	}
	void SetB(int n) {
		b = n;
	}
	void SetC(int n) {
		c = n;
	}

	int GetA() const {
		return a;
	}
	int GetB() const {
		return b;
	}
	int GetC() const {
		return c;
	}
};