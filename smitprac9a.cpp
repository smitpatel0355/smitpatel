#include<iostream>
using namespace std;
class stat
{
int num;
public:
static void print()
{
cout<<"static member function"<<endl<<endl;
}
};
int main()
{
cout<<"without using object:"<<endl;
stat :: print();
stat s;
cout<<"with  using object:"<<endl;
s.print();
}
