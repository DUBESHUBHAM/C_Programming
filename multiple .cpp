#include<iostream>
using namespace std;
class T1
{
public:
    T1()
    {
        cout<<"from base class ";
    }
};
class D1:public T1
{
public:
    D1()
    {
        cout<<"\n from derived class";

    }
};
int main()
{
    T1 d;
    return 0;
}
