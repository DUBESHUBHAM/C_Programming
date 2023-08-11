#include<iostream>
using namespace std;
class Test
{
    public:
    int i,j;
    static int k;

};
int main()
{
    Test t1,t2;
    cout<<&(t1.i)<<endl;
    cout<<&(t2.i)<<endl;
    cout<<&(t1.j)<<endl;
    cout<<&(t2.j)<<endl;
    cout<<&(t1.k)<<end;
    cout<<&(t2.k)<<endl;
}
