// friend function 
// uses of static key
// namespace
#include <iostream>
using namespace std;

/*
single->vechile ->car
multiple->child is inherited by father , mother and grandparents
multilevel->vechile->fourwheeler->car->bmw
hierarchy->vechile inherited fourwheeler and two wheeler
hybrid->vechile->fourwheeler,vechile->twowheeler, fair inherited fourwheeler
In hybrid i used hierarchy and single level inheritance 
*/


/*
Here, we create an object d of class D and call the foo() function on it. The problem is that D inherits from both B and 
C, and both B and C inherit from A. As a result, D has two copies of the A class within it, one through B and one through C. 
When we call d.foo(), the compiler doesn't know which foo() function to use, B::foo() or C::foo().

This ambiguity is the diamond problem. It creates confusion for the compiler, and it doesn't know which function to resolve, 
leading to a compilation error. To resolve this problem, you need to use virtual inheritance in C++.

Virtual inheritance allows you to share a single copy of the base class among multiple derived classes, preventing the 
diamond problem. To do this, you add the virtual keyword while inheriting the base class:


*/

class Vechile {

public:

void  print()
{
    cout<<"parent class called!"<<endl;
}
void show()
{
    cout<<"showcase is open to all"<<endl;
}

};

class Car:virtual public Vechile{
public:


void print1()
{
    cout<<"children Car class called!"<<endl;

}

};

class Bike:virtual public Vechile{
public:
void print2()
{
    cout<<"children Bike class called!"<<endl;
    
}};

class TollPlaza:public Car,public Bike{
    public:
    void print3()
    {
        cout<<"children Tollplaza called!";
    }
};

int main()
{  
    TollPlaza tp;
    tp.print();
    // tp.show();
    return 0;
}