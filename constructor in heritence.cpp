#include<iostream>
using namespace std;
class B1
{
public:
    B1()
    {
        cout<<"from B1 class ";
    }
};
class B2
{
public:
    B2()
    {
        cout<<"\n from B2 class";

    }
};
class D:public B1,public B2 //as per sequence
{
public:
    D()
      {
       cout<<"\n from D class";
      }
};

int main()
{
    D d;
    return 0;
}
