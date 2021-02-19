#pragma once
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Cow.h"
#include "Chicken.h"

#include <iostream>
#include <vector>


class Opera
{
public:
    Opera();
    ~Opera();
    void sing(char nextChar);
    
private:
    std::vector<Animal*> _animals;

};
 