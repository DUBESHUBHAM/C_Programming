#include<iostream>
using namespace std;
class wall
{
    double  length,height;
    public:
    wall(double len)
    {
        length=len;
        height=3;
    }
    wall (double len,double hgt)
    {
        length=len;
        height=hgt;
    }
    double display()
    {
        return length*height;
    }
};
int main()
{
    wall w1(4);
    wall w2(2,9);
    cout<<"area of first wall"<<w1.display();
    cout<<"\narea of second wall="<<w2.display();
}
