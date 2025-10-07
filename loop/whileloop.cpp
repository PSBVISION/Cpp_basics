#include <iostream>
using namespace std;
int main()
{
  // Challenge: Write a program that keeps track of tea orders. Each time a cup of tea is made, decrease the number of cups remaining. The loop should run until all cups are served.
  int cups;
  cout << "Enter the number of Tea cups: ";
  cin >> cups;
  while (cups > 0)
  {
    cups--;
    cout << "Serving a cup of tea\n" << cups << " remaining" << endl;
  }
  cout << "All cups have been served." << endl;
  return 0;
}
