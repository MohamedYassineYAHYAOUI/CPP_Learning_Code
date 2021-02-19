#pragma once

#include "Person.h"
#include "Phone.h"

#include <iostream> 
#include <string> 
#include <string_view> 

class MobilePhone : public Phone
{
public:
    MobilePhone(const Person& person): Phone{person} {}
    //~MobilePhone() {};

    virtual void ring() const override {};

private:
    int     _position = 0;
};
