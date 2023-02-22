#include<iostream>
using namespace std;
int main()
{
	int *ptr1=new int(25);
	cout<<*ptr1;
	char *ptr2=new char('A');
	cout<<*ptr2;
	
	delete ptr1;
	delete ptr2;
}
