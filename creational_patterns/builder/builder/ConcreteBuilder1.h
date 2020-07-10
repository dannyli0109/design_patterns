#pragma once
#include "Builder.h"
#include "Product1.h"
class ConcreteBuilder1 : public Builder {
public:
	~ConcreteBuilder1() {
		delete result;
	}
	virtual void Reset() override {
		delete result;
		result = new Product1;
	}
	virtual void BuildStepA() override {
		result->SetA(1);
	}
	virtual void BuildStepB() override {
		result->SetB(2);
	}
	virtual void BuildStepZ() override {
		result->SetC(3);
	}
	Product1* GetResult() {
		return result;
	}
private:
	Product1* result;
};