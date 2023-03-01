#include<iostream>
using namespace std;
struct Employee
{
    char name[60];
    char empid[30];
    char houseno[80];
    char area[20];
    char city[20];
    char state[20];
};
int main()
{
    Employee s;
    cout << "Name of the Employee : ";
    cin >> s.name;
    cout << "Enter the Employee Id : ";
    cin >> s.empid;
    cout << "Enter the House Number : ";
    cin>> s.houseno;
    cout<< "Enter the area:";
    cin>> s.area;
    cout<< "Enter the city : ";
    cin>> s.city;
    cout<< "Enter the state : ";
    cin>> s.state;

    cout << "\nDisplaying Information \n";

    cout<<"Name:"<< s.name<<endl;
    cout<<"Employee ID:"<<s.empid<<endl;
    cout<<"Address:"<< s.houseno<<","<<s.area<<","<<s.city<<","<<s.state<<endl;
    return 0;
}
