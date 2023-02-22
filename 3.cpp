#include<iostream>
using namespace std;
int main()
{
	int *arr;
	int size;
	cout<<"enter array size ";
	cin>>size;
	arr=new int[size];
	cout<<" array for DMA is successful"<<endl;
	delete [] arr;
}
