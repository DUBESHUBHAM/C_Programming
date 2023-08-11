#include<iostream>
using namespace std;
class student
{
int roll_no;
char stud_name[20];
public:
void accept()
{
cout<<"enter details of student:";
cin>>roll_no>>stud_name;
}
void putdata()
{
cout<<"roll number:"<<roll_no<<" "<<"Name:"<<stud_name<<endl;
}
};
int main()
{
student s[5];
int i;
for(i=0;i<5;i++)
{
cout<<"\nEnter details of "<<i+1<<"student:\n";
s[i].accept();
}
for(i=0;i<5;i++)
{
cout<<"\ndetails of "<<i+1<<"student:\n";
s[i].putdata();
}
}
