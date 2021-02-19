#include "RelativePoint.h"
#include <vector>
#include <string>
#include <iostream>

int main()
{
    //auto a = std::vector<RelativePoint>(3);
    //std::vector<AbsolutePoint>(3);
    int size =100000;
    auto vct = std::vector<unsigned int>();
    vct.reserve(size);
    for(int i=2; i<= size; i++)
    {
        vct.push_back(i);
    }


    for (auto it = vct.begin(); it != vct.end(); it++) {
        for(auto it2 = it+1; it2 != vct.end();){
            if (*it2 % *it == 0) {
                it2 = vct.erase(it2);
            } else {
                ++it2;
            }
        }
    }

    /*
    //auto it = vct.begin();
    for(auto it= vct.begin(); it!= vct.end();)
    {
        if((*it)*(*it) <= (unsigned int)size){
            for(auto it2= vct.begin(); it2!= vct.end();){
                if(*it2 % *it == 0){
                    vct.erase(it2);
                }else{
                    it2++;
                }
            }
        }else{
            it++;
        }
    }
    */
    
    std::cout << vct.size() << std::endl;
    

    
    return 0;
}