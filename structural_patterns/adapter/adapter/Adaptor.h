#pragma once
#include "ClientInterface.h"
#include "Service.h"

class Adaptor : public ClientInterface, public Service {
public:
	Adaptor(Service* adaptee) {}
	virtual void Method(int data) const override {
		double specialData = data;
		ServiceMethod(specialData);
	}
};