#include<iostream>
using namespace std;
class test
{
    int a;
public:
     int test(){};
     test(int i)
     {
         a=i;
     }
     test operator +(test t2)
     {
         return (this->a+t2.a);
     }
};
int main()
{
    test t1(10),t2(20),t3;
    cout<<"result=";
   t3= t1+t2;
}
