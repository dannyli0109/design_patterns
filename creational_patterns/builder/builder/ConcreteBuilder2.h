#pragma once

#include "Builder.h"
#include "Product2.h"
class ConcreteBuilder2 : public Builder {
public:
	~ConcreteBuilder2() {
		delete result;
	}
	virtual void Reset() override {
		delete result;
		result = new Product2;
	}
	virtual void BuildStepA() override {
		result->SetA(4);
	}
	virtual void BuildStepB() override {
		result->SetB(5);
	}
	virtual void BuildStepZ() override {
		result->SetC(6);
	}
	Product2* GetResult() {
		return result;
	}
private:
	Product2* result;
};