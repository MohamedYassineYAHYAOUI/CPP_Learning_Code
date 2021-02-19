#include <array>
#include <string>
#include <iostream>


class Solution {
    
    
public:
    
    bool isAnagram(std::string s, std::string t) {
        auto tab = intArray(s);
        for(int i=0; i<tab.size() ; i++ ){
             std::cout << tab[i] <<std::endl;
        }
    }
private : 
    std::array<int, 24>& intArray(const std::string& s )
    {
        std::array<int, 24> lettersTable;
        for(int i=0; i<s.length() ; i++ ){
            lettersTable[s[i]-'a'] += 1;
        }
        return lettersTable;
    }

};