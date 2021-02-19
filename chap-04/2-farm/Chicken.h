#pragma once

#include <iostream>

class Chicken : public Animal
{
public:
    void sing(char nexChar) const override { std::cout << "Cotcotcotcodet" << nexChar; }
    ~Chicken() override {std::cout << "CotCooooooooot" << std::endl;};
};
