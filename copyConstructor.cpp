// overloading
// copyConstructor
// overriding
// inheritance
// friend function 
// uses of static key
// namespace

#include <iostream>
using namespace std;

class Complex{
int a,b;
public:

Complex(int x,int y)
{
   a = x ; b = y;
}

// Complex operator+ (const Complex &temp)
// {
//     Complex tt;
//     tt.a = a+temp.a;
//     tt.b = b+temp.b;
//     return tt;
// }

//  Complex temp in formal argument in function always intialised so 
//  complex (complex temp) => will call complex c2(c1) -> when it calls 
//  complex temp = c1 
//  so it will trap in infinte loop

Complex (Complex &temp)
{
    a = temp.a;
    b = temp.b;
}

void display()
{
    cout<<a<<" "<<b<<endl;
}

};

int main()
{   
    Complex c1(2,3);
    Complex c2(3,4);
    Complex c3(c1);
    // Complex temp(c1);
    // Complex temp2(c1)
    // c2.display();
    c3.display();
    return 0;
}