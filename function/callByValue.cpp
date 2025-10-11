#include<iostream>
using namespace std;

void giveSalary(int salary){
  salary = salary + 5;
  cout << "Your salary is: " << salary << endl;
}

int main(){
  int mySalary = 10000;
  giveSalary(mySalary);
  cout << "Your Total salary is: " << mySalary << endl;
  return 0;
}