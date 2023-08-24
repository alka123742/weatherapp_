// overloading
// overriding
// inheritance
// friend function 
// uses of static key
// namespace

#include <iostream>
using namespace std;

class Complext{
int a,b;
public:
Complext()
{

}
Complext(int x,int y)
{
   a = x ; b = y;
}

Complext operator+ (Complext &temp)
{
    Complext tt;
    tt.a = a+temp.a;
    tt.b = b+temp.b;
    return tt;
}

void display()
{
    cout<<a<<" "<<b<<endl;
}

};

int main()
{
    Complext c1(2,3);
    Complext c2(3,4);
    Complext c3 = c2+(c1);
    c2.display();
    c3.display();
    return 0;
}