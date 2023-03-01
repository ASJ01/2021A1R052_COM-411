#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

const int MAX_NAMES = 100;

struct Person {
  string name;
};

int main() {
  Person people[MAX_NAMES];
  int n;

  // Read in the number of people
  cout << "Enter the number of people: ";
  cin >> n;

  // Read in the names of each person
  for (int i = 0; i < n; i++) {
    cout << "Enter the name of person " << i + 1 << ": ";
    cin >> people[i].name;
  }

  // Bubble Sort algorithm to sort the names in alphabetical order
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (people[j].name > people[j + 1].name) {
        swap(people[j], people[j + 1]);
      }
    }
  }

  // Print out the sorted names
  cout << "Sorted names: " << endl;
  for (int i = 0; i < n; i++) {
    cout << people[i].name << endl;
  }

  return 0;
}
