#include <iostream>
using namespace std;
int checkAge(int age)
{
  return age;
}

// declaring a function
void printSalary(int salary);

void printSalary(string salary = "not Enough"){
  cout << "Your salary is: " << salary << endl;
};
int main()
{
  int age = checkAge(20);
  cout << age << endl;
  printSalary(10000);
  printSalary();
  return 0;
}

void printSalary(int salary)
{
  cout << "Your salary is: " << salary << endl;
}