/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include "Clock.h"
#include "Square.h"
using namespace std;

    int main()
{
    Clock obj1(0,0,0);
    obj1.Set(5,5,5);
    obj1.Show();
    // obj1.Set();
    // obj1.Show();
     Clock obj2;
    //  obj2.Set();
    obj2.Show();
    Clock obj3(10,30,50);
    obj3.Show();
     
    Clock obj4( obj3);
    obj4.Show();
     
     ////////
     //square example
     
    Square obj[3]={ Square(2),Square(3),Square(4)};
    for(int n=0;n<3;n++)
    {
        cout<<obj[n].a<<endl;
        cout<<obj[n].Area()<<endl;
    }
    
    Square obj_new[3]={ Square(2),Square(3)};
    for(int n=0;n<3;n++)
    {
        cout<<obj_new[n].a<<endl;
        cout<<obj_new[n].Area()<<endl;
    }
    
    
     
     
     

    return 0;
}
