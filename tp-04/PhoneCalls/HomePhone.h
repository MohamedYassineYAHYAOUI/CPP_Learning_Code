#pragma once

#include "Person.h"
#include "Phone.h"

#include <iostream> 
#include <string> 
#include <string_view> 

class HomePhone : public Phone
{
public:
    HomePhone(const Person&  persone, int position) : Phone{persone}, _position {position} {};

    //~HomePhone() {};

    void ring() const override 
    {
        if( _owner.get_position() != _position){
          _owner.voice_mail();
        }else{
            //Phone::ring();
           _owner.answer_phone();
        }
    }


private:
    
    int     _position = 0;
};
