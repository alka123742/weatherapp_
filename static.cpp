// namespace

#include <iostream>
using namespace std;

/*

* if we declare the static member variable or also known as class variable in class 
but if we not declare outside then it 
* it is not an instance variable , generation of this class variable doesnot depend
on creation of object
* it will be not destroy even after completion of function 
* there will be only one copy of static member variable 
*/

/*
Static function
Static function is called even without object or with object.
static function in class only able to access static variables.
*/

class Car{
int x,y;

public:
// static int kt ;
Car(int a,int b){x=a;y=b;}

static void print()
{
    cout<<"alka sexy!!!";
}

};

int Car:: kt = 4;

int main()
{  
    // Car c1(3,4);
    // cout<<Car::kt<<endl;
    print();
    return 0;
}