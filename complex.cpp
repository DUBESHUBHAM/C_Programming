#include<iostream>
using namespace std;
class base
{
    int i=10;
public:
    int j=20;
protected:
    int k=30;
};
    class D:base
{
public:
    void print()
    {
        cout<<"j="<<j<<endl;

    }
};
int main()
{
    D d1;
    d1.print();
}
