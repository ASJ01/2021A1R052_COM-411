#include <iostream>
#include <string>
using namespace std;

class Course {
 private:
  string course_name;
  string course_ID;
  string semester;


 public:
  Course(string id, string n, string sem)
  {
    semester = sem;
    course_ID = id;
    course_name = n;
  }

  void display()
   {
    cout << "\nSemester: " << semester << endl;
    cout << "Course ID: " << course_ID << endl;
    cout << "Course Name: " << course_name << endl;
  }
};

int main() {
    int n;
    string semester;
    cout << "Enter the Semester: ";
    cin >> semester;
    cout << "Enter the number of Subjects: ";
    cin >> n;

    Course*courses[n];
  for (int i = 0; i < n; i++) {
  string course_name;
  string course_ID;

  cout << "\nCourse ID: " ;
  cin>> course_ID;

  cout << "Course Name: ";
  cin>>course_name;

  courses[i] = new Course(course_ID, course_name, semester);
    }

  cout << "\nDetails of course:" << endl;
    for (int i = 0; i < n; i++) {
        courses[i]->display();
    }

  return 0;
}


