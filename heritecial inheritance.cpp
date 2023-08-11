#include<iostream>
using namespace std;
class B
{   protected:
    int i;
    public:
        B(int a)
    {
        i=a;
    }
};
class D:public B
{
    int j;
public:
    D(int a,int b):B(a)
    {
        j=b;

    }
void display()
{
    cout<<"i="<<i<<"j="<<j;
}
};

int main()
{
    D d1(10,20);
    d1.display();
    return 0;
}
