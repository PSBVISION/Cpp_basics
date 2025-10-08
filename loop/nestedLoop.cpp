#include<iostream>
#include<string>
using namespace std;
int main(){
  // Challenge: Write a program that brews multiple cups of different types of tea. For each type of tea, brew 3 cups using a nested loop.
  string teaTypes[4] = {"Green Tea", "Black Tea", "Oolong Tea", "Ice Tea"};
  for(int i=0; i<4; i++){
    cout << "Brewing " << teaTypes[i] << endl;
    for(int j=0; j<3; j++){
      cout << "Brewing cup " << j+1 << " of " << teaTypes[i] << endl;
    }
  }
  return 0;
}