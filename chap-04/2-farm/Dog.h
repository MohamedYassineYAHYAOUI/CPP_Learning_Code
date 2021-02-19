#pragma once

#include <iostream>

class Dog : public Animal
{
public:
    void sing(char nexChar) const override { std::cout << "Waf" << nexChar; }
};
 