
#include "Opera.h"


Opera::Opera(){
    _animals.emplace_back(new Dog {});
    _animals.emplace_back(new Cat {});
    _animals.emplace_back(new Cow {});
    _animals.emplace_back(new Chicken {});
}

Opera::~Opera(){
    for(auto* animal : _animals)
    {
        delete animal;
    }
}

void Opera::sing(char nextChar) 
{
    for( auto* animal : _animals)
    {
       animal->sing(nextChar);
        std::cout << std::endl;
    }
  
}