#include<iostream>
#include<string>
using namespace std;
int main(){
  // Challenge: Write a program that checks if the user wants to order Green Tea. If the user types "Green Tea," the program should confirm their order.
  string teaOrder;
  cout << "Enter your tea order: ";
  //getline because it takes string as data
  getline(cin, teaOrder);
  if(teaOrder == "Green Tea"){
    cout<< "Your order is: " << teaOrder << "is ready" << endl;
  }
}