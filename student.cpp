#include<iostream>
using namespace std;
struct Student
{char name[60];
int rollno;
char dob[11];
char branch[10];
int marks;
};
int main()
{Student s;
int i,n;
cout<<"Enter The Number of Entries:";
cin>> n;
for(i=1;i<=n;i++)
{
cout<<"Enter data for"<<i+1<<"student"<<endl;
cout << "Name of the Student:";
cin >> s.name;
cout << "Roll Number of the Student:";
cin >> s.rollno;
cout << "Date of Birth:";
cin>> s.dob;
cout<< "Branch of the Student:";
cin>> s.branch;
cout<< "Total Marks of the Student:";
cin>> s.marks;

cout<<"Name:"<< s.name<<endl;
cout<<"Roll Number:"<<s.rollno<<endl;
cout<<"Date Of Birth:"<< s.dob<<endl;
cout<<"Branch:"<< s.branch<<endl;
cout<<"Marks:"<< s.marks<<endl;
}
return 0;}
