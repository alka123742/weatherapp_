// inheritance
// friend function 
// uses of static key
// namespace

#include <iostream>
using namespace std;

/*
it is valid if we declare pure virtual function with in private access modifier!!
It is only valid for pure Virtual Function 
*/
class fourWheeler{
virtual void print()=0;
public:
void show()
{
    cout<<"abstract class called!"<<endl;
}
};
class Vechile : public fourWheeler{

public:

virtual void  print()
{
    cout<<"parent class called!"<<endl;
}

};

class Car:public Vechile{
public:


void print()
{
    cout<<"children class called!"<<endl;
    //  call parent class function 
    Vechile::print();
}

};

int main()
{  
    Car ct;
    Vechile st;
    Vechile *vt = &ct;
    ct.print();
    ct.show();
    return 0;
}