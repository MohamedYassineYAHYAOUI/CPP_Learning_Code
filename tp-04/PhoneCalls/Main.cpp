#include "Person.h"
#include "Phone.h"
#include "HomePhone.h"
#include "MobilePhone.H"

int main()
{
//QUESTION 2
    /*
    Person paul { "Paul", 3 };
    //Phone  phone { paul };
    HomePhone phone { paul , -10};
    //paul.set_position(8);
    phone.ring();
    */
//QUESTION 3
   /*
    Person paul { "Paul", 3 };

    HomePhone close_phone { paul, 3 };
    close_phone.ring();					// Hi! Paul on the phone.

    HomePhone far_phone { paul, -10 };
    far_phone.ring();
    */

//QUESTION 4
/*
    Person paul { "Paul", 3 };
    HomePhone far_phone { paul, -10 };

    const Phone& normal_phone = far_phone;
    normal_phone.ring();				// This is the voicemail of Paul. Please leave a message.
*/
    
//QUESTION 6
/*
    Person paul { "Paul", 3 };
    MobilePhone mobile_phone { paul };

    const Phone& normal_phone = mobile_phone;
    normal_phone.ring();				// Hi! Paul on the phone.
*/
 //QUESTION 7 
/*
    Person paul { "Paul", 3 };
    Phone normal_phone { paul };		// Doesn't compile!
*/

//QUESTION 8
/*
    Person paul { "Paul", 3 };
    HomePhone far_phone { paul, -10 };

    const Phone& normal_phone = far_phone;
    normal_phone.ring();
*/
// QUESTION 10 
/*    Person paul { "Paul", 3 };
    MobilePhone mobile_phone { paul };
    */
    return 0;
}
