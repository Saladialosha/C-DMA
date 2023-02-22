#include<iostream>
using namespace std;
int main()
{
int *p;
p= new int[3];
p[0]=2;
p[1] =3;
p[3]=9;
for ( int i=0; i<3; i++)
{
cout<<p[i]<<endl;
}
delete [] p;
}
