#include<iostream>
using namespace std;
int main()
{
float *ptr;
ptr=new float;
*ptr=10;
cout<<" *ptr= "<<*ptr<<endl;
cout<<"address is " <<ptr<<endl;

delete ptr;

cout<<" *ptr= "<<*ptr<<endl;
cout<<"address is " <<ptr<<endl;

}
