#pragma once
#include "Builder.h"
#include <cstring>
class Director {
	Builder* builder;
public:
	Director(Builder* builder) {
		this->builder = builder;
	}
	void ChangeBuilder(Builder* builder) {
		this->builder = builder;
	}
	void Make(const char* type = "") {
		builder->Reset();
		if (strcmp(type, "simple") == 0) {
			builder->BuildStepA();
		}
		else {
			builder->BuildStepB();
			builder->BuildStepZ();
		}
	}
};