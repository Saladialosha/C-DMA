#include<iostream>
using namespace std;
class base
{
public:
base()
{
cout<<" base constructor"<<endl;
}
virtual ~ base()
{
cout<< " base destructor" <<endl;
}
};

class derive : public base
{
public :
derive()
{
cout<<" derive constructor"<<endl;
}
~ derive()
{
cout<< " derive destructor" <<endl;
}
};
main()
{
base *ptr=new derive;
delete ptr;
}
