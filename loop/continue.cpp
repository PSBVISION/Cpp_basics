#include<iostream>
#include<string>
using namespace std;
int main(){
  // Challenge: Write a program that skips brewing green tea if the user dislikes it. Use a continue statement to skip over green tea but brew other types of tea in a list.
  string teaTypes[4] = {"Green Tea", "Black Tea", "Oolong Tea", "Ice Tea"};
  for(int i=0; i<4; i++){
    if(teaTypes[i] == "Green Tea"){ //skips brewing green tea if the user dislikes it
      cout << "Skipping the " << teaTypes[i] << endl;
      continue;
    }
    cout << "Brewing " << teaTypes[i] << endl;
  }
  return 0;
}