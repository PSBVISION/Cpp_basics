#include<iostream>
using namespace std;

void giveSalary(int &salary){
  salary = salary + 5;
  cout << "Your salary is: " << salary << endl;
}

int main(){
  int salary = 10000;
  giveSalary(salary);
  cout << "Your Total salary is: " << salary << endl;
  return 0;
}


// & is used to pass by reference