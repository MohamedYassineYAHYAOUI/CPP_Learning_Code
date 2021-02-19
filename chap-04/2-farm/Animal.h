#pragma once

#include <iostream>

class Animal
{
public:
    virtual void sing(char nexChar) const { std::cout << "..." << nexChar; }
    virtual ~Animal() {};

};
