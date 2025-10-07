#include <iostream>
using namespace std;
int main()
{
  // Challenge: Write a program that lets the user select a tea type from a menu. Use a switch statement to display the price based on the selected tea:* Green Tea: $2

  // + Black Tea: $3

  // + Oolong Tea: $4
  int choice;
  double price;

  cout << "Select your tea\n 1. Green Tea \n 2. Black Tea \n 3. Oolong Tea \n"
       << "Enter your choice: ";
  cin >> choice;

  switch (choice)
  {
  case 1:
    price = 2.0;
    cout << "You selected Green Tea.\n Price: $" << price << endl;
    break;
  case 2:
    price = 3.0;
    cout << "You selected Black Tea.\n Price: $" << price << endl;
    break;
  case 3:
    price = 4.0;
    cout << "You selected Oolong Tea.\n Price: $" << price << endl;
    break;
  default:
    cout << "Invalid choice." << endl;
    break;
  }
}