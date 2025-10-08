#include <iostream>
#include <string>
using namespace std;
int main()
{
  // Challenge: Write a program that keeps serving tea until the user says they've had enough (input 'stop'). Use a break statement to exit the loop when the user types ‘stop'.
  string response;
  while (true)
  {
    cout << "Do you want more tea (type 'stop' to quit):";
    getline(cin, response);
    if (response == "stop" || response == "STOP" || response == "Stop")
    {
      break;
    }
    cout << "Serving a cup of tea..." << endl;
  }
}