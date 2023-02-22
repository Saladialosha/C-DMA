#include<iostream>
using namespace std;
main()
{
int *p;
int size;
size=3;
p=new int [size];
for (int i=0;i<3;i++)
{
cin>>p[i];
}

for (int i=0; i<3; i++)
{
cout<<p[i]<<endl;
}
delete[]p;
}
