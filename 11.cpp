#include<iostream>
using namespace std;
class base
{
public:
int a , b;
virtual void in()
{
cout<<" enter values"<<endl;
cin>>a>>b; }
void show()
{
cout << " values are "<<a<<" "<<b<<endl;
} };
class derive: public base
{
int c;
public:
void in()
{
cout<<" enter values of a , b ,c "<<endl;
cin>>a>>b>>c; }
void show()
{
cout<<" value of c is "<<c;
} };
main()
{
base b;
derive d;
d.in();
b=d;
b.show();
}
