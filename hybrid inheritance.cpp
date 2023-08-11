#include<iostream>
using namespace std;
class student
{
 int m1;
 char name[20];
 public:
 void Saccept()
 {
  cout<<"enter roll no.and name of student:";
  cin>>m1>>name;
 }
 void Sputdata()
 {
  cout<<"marks of m1 student:"<<m1<<endl;
  cout<<"name of student:"<<name<<endl;
 }
};
class marks:public student
{
    public:
 int m1,m2;
 public:
 void Maccept()
 {
  cout<<"\nEnter mark of two subject:";
  cin>>m1>>m2;
 }
 void Mputdata()
 {
  cout<<"marks of frist subject:"<<m1<<endl;
  cout<<"marks of second subject:"<<m2<<endl;
 }
};
class sports
{
    public:
 int spm;
 public:
 void spaccept()
 {
  cout<<"sport  marks :";
  cin>>spm;
 }
 void spputdata()
 {
     cout<<"marks of sports="<<spm<<endl;
 }
};
class result:public marks,public sports
 {
     int tot;
     float per;
     public:
     void rtotal()
     {
         tot=m1+m2+spm;
         cout<<"total marks of subject:"<<tot;
     }
     void rper()
     {
         per=m1+m2+spm/tot*100;
         cout<<"enter per="<<per;
     }
 };
int main()
{
 result r1;
 r1.Saccept();
 r1.Maccept();
 r1.spaccept();
 r1.Sputdata();
 r1.Mputdata();
 r1.spputdata();
 r1.rtotal();
 r1.rper();
}
