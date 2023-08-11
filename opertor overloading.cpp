#include<iostream>
#include<math.h>
using namespace std;
class shape
{
 int feet,inch;
 public:
 shape(int f,int i)
 {
  feet=f;
  inch=i;
 }
 void operator++()
 {
 feet++;
 inch++;
 }
 void display()
 {
  cout<<"feet="<<feet<<endl;
  cout<<"inch="<<inch<<endl;
 }
};
int main()
{
shape s(8,4);
++s;
s.display();
}
