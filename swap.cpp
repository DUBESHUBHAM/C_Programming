#include<iostream>
using namespace std;
class swap1
{
    int i,j,temp;
    public:
    swap1()
    {
        i=10;
        j=20;
        temp=i+j;
        i=temp-i;
        j=temp-i;
    }
    void display()
    {
        cout<<"swap "<<i<<" "<<j<<endl;
    }
};
int main(void)
{
    swap1 s1;

    s1.display();
     return 0;
}
