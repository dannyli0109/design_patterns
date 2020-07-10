#pragma once

class Builder {
public:
	virtual void Reset() = 0;
	virtual void BuildStepA() = 0;
	virtual void BuildStepB() = 0;
	virtual void BuildStepZ() = 0;
};