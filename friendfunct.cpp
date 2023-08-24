// uses of static key
// namespace

#include <iostream>
using namespace std;

/*
friend function is used to access data member of class in which friend function is declared
friend function doesnot directly access all the members of class
friend function doesnot need any caller object 
*/

class Car{
int x,y;
public:

Car(int a,int b){x=a;y=b;}
void print();
friend void helper(Car);
};
void helper(Car c1)
{
  cout<<c1.x<<c1.y;

}
void Car:: print()
{
 cout<<"children class called!"<<endl; 
}
int main()
{  
    Car c1(3,4);
    // cout<<c1.x<<c1.y<<endl;
    // we cannot access private member
    helper(c1);
    return 0;
}