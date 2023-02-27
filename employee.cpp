#include<iostream>
using namespace std;
struct Employee
{char name[60];
 char empid[30];
 char houseno[80];
 char area[20];
 char city[20];
 char state[20];
};
int main()
{Employee s;
cout << "Name of the Employee:";
cin >> s.name;
cout << "Enter the Employee Id:";
cin >> s.empid;
cout << "Enter the House Number";
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
return 0;}
