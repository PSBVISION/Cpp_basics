#include<iostream>
#include<vector>
using namespace std;
class Base {
  public:
    string teaName;
    int servings;
    vector<string> ingredients;

    //param constructor
    Base(string name, int serving, vector<string> ingredient){
      teaName = name;
      servings = serving;
      ingredients=ingredient;
      cout << "Param constructor called" << endl;
    }
    void displayDetails()
    {
      cout << "Your Office name: " << teaName <<endl;
      cout << "Your salary is: " << servings <<endl;
      cout << "Your salary expectation is: ";
      for (string ingredient : ingredients)
      {
       cout << ingredient << ", ";
      }
     cout <<endl;
    }
  };
int main() {
  Base lemonTea("Lemon Tea", 2, {"Water", "Tea Leaves", "Lemon Juice"});
  lemonTea.displayDetails();
  return 0;
}