// check the creation of abstract class object
#include<iostream>
using namespace std;
class shape // anstract class
{
protected:
double a, b;
public:
void read()
{
cout<<" enter values"<<endl;
cin>>a>>b;
}
virtual void cal()=0;
};
class rectangle: public shape
{
public:
void cal()
{
double area=a*b;
cout<<" area of rectangle is "<<area<<endl;
}};
class square :public shape
{
public:
void cal()
{
double ar = a*a;
cout<<" area of square is " <<ar<<endl;
}
};
main()
{
shape *obj[2];
rectangle r1;
square s1;
obj[0] = &r1;
obj[1]=&s1;
for (int i ; i<2; i++)
{
obj[i]->read();
obj[i]->cal();
}

}
