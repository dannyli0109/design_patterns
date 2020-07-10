#include "Singleton.h"
#include <iostream>
int main() {
	Singleton* s = Singleton::GetInstance();
	std::cout << s->field << std::endl;
	s->field = 20;
	Singleton* s2 = Singleton::GetInstance();
	std::cout << s2->field << std::endl;
	s2->field = 5;
	std::cout << s->field << std::endl;
}