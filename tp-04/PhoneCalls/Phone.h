#pragma once

#include "Person.h"

class Phone
{
public:

	virtual ~Phone() {};
	
	virtual void ring() const =0; //vp

protected: 
	Phone(const Person& owner)
		: _owner { owner }
	{}

	const Person& _owner;

};
