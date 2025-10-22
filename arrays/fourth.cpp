#include<iostream>
using namespace std;

int* salaryIncrement(int year){
  int* increment = new int[year];
  for(int i = 0; i < year; i++){
    increment[i] = (i + 1) * 10;
  }
  return increment;
} 
int main(){
  int workingYear = 5;
  int* realSalary = salaryIncrement(workingYear); 
  
  for(int i = 0; i < workingYear; i++){
    cout <<"Your salary in " << i+1 << " year is: " << realSalary[i] << " chi"<< endl;
  }

  delete[] realSalary;
  return 0;
}