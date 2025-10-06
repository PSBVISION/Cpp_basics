#include <iostream>
#include <string>
using namespace std;
int main()
{
  // Challenge: Write a program that checks if a tea shop is open. If the current hour (input by the user) is between 8 AM and 6 PM, the shop is open; otherwise, it's closed.
  int hour;
  cout << "Enter the current hour (0-23): " ;
  cin >> hour;
  if(hour >= 8 && hour <= 18){
    cout << "The shop is open." << endl;
  }else{
    cout << "The shop is closed." << endl;
  }
  return 0;
}