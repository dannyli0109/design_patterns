#include "Adaptor.h"

int main() {
	Service* service = new Service();
	Adaptor* adaptor = new Adaptor(service);
	ClientInterface* ci = new ClientInterface();
	ci->Method(20);
	adaptor->Method(20);

	delete ci;
	delete service;
	delete adaptor;
}