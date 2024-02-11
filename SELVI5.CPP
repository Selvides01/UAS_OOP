#include <iostream>
using namespace std;

class Employee {
 public:
  Employee(string n, double hr, int h) : name(n), hourlyRate(hr), hoursWorked(h) {}

  double calculateSalary() const {
    return hourlyRate * hoursWorked;
  }

  void printInfo() const {
    cout << "Name: " << name << endl;
    cout << "Hourly rate: " << hourlyRate << endl;
    cout << "Hours worked: " << hoursWorked << endl;
    cout << "Total salary: " << calculateSalary() << endl;
  }

 private:
  string name;
  double hourlyRate;
  int hoursWorked;
};

int main() {
  Employee selvi("SELVI DESTI RIYANI", 20.0, 80);
  selvi.printInfo();
  return 0;
}
