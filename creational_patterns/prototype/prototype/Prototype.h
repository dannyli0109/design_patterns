#pragma once

class Prototype {
public:
	virtual ~Prototype() {}
	virtual Prototype* Clone() = 0;
};