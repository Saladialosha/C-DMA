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

class derive1: public base
{
public:
void display()
{
cout<<" i am from derive1 "<<endl;
}
 };
class derive2: public base
{
public:
void display()
{
cout<<" i am from derive 2 "<<endl;
} 
};
main()
{
base *b;
derive1 d1;
derive2 d2;
b=&d1;
b->display();
b=&d2;
b->display();
}
