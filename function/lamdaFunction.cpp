#include<iostream>
using namespace std;
int main(){
  //lamda functions means nameless function
  [](){cout<<"Hello world"<<endl; }();
  auto weakBoss = [](int power){cout << "Weak Villian has power: " << power << endl;};
  weakBoss(-100);
  return 0;
}