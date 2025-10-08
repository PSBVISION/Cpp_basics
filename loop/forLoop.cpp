#include<iostream>
using namespace std;
int main(){
  // Challenge: Write a program that prints the brewing instructions for making 5 cups of tea. The brewing process should be printed once for each cup using a for loop.
  int cups =5;
  for (int i = 1; i <= cups; i++)
  {
    cout << "Brewing cup " << i << " of tea..."<<endl;
  }
  return 0;
}