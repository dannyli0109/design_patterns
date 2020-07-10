#pragma once
class Singleton {
private:
	static Singleton* instance;
	Singleton() {}
public:
	Singleton(Singleton& other) = delete;
	void operator=(const Singleton&) = delete;
	int field = 0;
	static Singleton* GetInstance() {
		if (!instance) {
			instance = new Singleton();
		}
		return instance;
	}
};

Singleton* Singleton::instance = nullptr;