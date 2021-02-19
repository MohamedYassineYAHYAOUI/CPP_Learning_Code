#pragma once

#include <iostream>

class Cat : public Animal
{
public:
    void sing(char nexChar) const override { std::cout << "Meow" << nexChar; }
};
