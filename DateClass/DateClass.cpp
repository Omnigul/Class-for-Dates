/* Design a class called Date. The class should store a date in three integers: month, day, and year.
There should be member functions to print the date in the following forms:
• 12/25/2021
• December 25, 2021
• 25 December 2021
Demonstrate the class by writing a complete program implementing it. */

#include <iostream>
#include "Date.h"
using namespace std;



int main()
{
    Date test1;
    test1.display(1);

    Date test2(2, 28, 2009);
    test2.display(1);

    Date test3(45, 2, 2009);
    test3.display(1);

    Date test4(2, 29, 2009);
    test4.display(1);

    Date test5(2, 29, 2008);
    test5.display(1);

    Date test6(7, 17, 2000);
    test6.display(1);
    test6.display(2);
    test6.display(3);
}

