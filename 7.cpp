#include<iostream>
using namespace std;
class base
{
public:
virtual void display()
{
cout<<" i am from base class "<<endl;
}
};

class derive: public base
{
public:
void display()
{
cout<<" i am from derive "<<endl;
}
 };
main()
{
base *b;
derive d;
b=&d;
b->display();
}
