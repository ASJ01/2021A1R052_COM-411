//student structure in single input

#include <iostream>
using namespace std;

struct Student
{
    char name[50];
    char dob[10];
    int roll;
    int marks;
    char branch[30];
};
int main()
{
    Student s;
    cout << "Enter Name = ";
    cin>>s.name;
    cout << "Enter DOB (DD/MM/YYYY) = ";
    cin >> s.dob;
    cout << "Enter Roll = ";
    cin >> s.roll;
    cout << "Enter Marks = ";
    cin >> s.marks;
    cout << "Enter Branch = ";
    cin >> s.branch;

    cout<<"\nName : "<< s.name<<endl;
    cout<<"DOB : "<<s.dob<<endl;
    cout<<"Roll no. : "<<s.roll<<endl;
    cout<<"Marks : "<<s.marks<<endl;
    cout<<"Branch : "<<s.branch<<endl;
}
