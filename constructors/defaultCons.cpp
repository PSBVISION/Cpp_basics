#include<iostream>
#include<vector>
using namespace std;
class Base {
  public:
    string teaName;
    int servings;
    vector<string> ingredients;

    //Default constructor
    Base(){
      teaName = "Green Tea";
      servings = 1;
      ingredients.push_back("Water");
      ingredients.push_back("Tea Leaves");
      cout << "Default constructor called" << endl;
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
  Base defaultBase;
  defaultBase.displayDetails();
  return 0;
}