#include <iostream>
using namespace std;
class exam
{
int marks;
public:
exam():marks(90)
{
}
void print()
{
cout<<"marks are  "<<marks<<endl;
}
};
main()
{
exam *obj;
obj=new exam;
obj->print();
delete obj;
}
