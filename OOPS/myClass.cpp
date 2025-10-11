#include <iostream>
#include <string>
#include <vector>

class Salary{
  public:
    // data members (attributes)
    int salary; // int doesn’t need std:: because it is a built-in (primitive) data type,
    // int, float, double, char, bool
    //  string and vector are part of the C++ Standard Library, which lives inside the std namespace.
    std::string name;
    std::vector<int> salaryBreakup;
    // function members

    void printSalary()
    {
      std::cout << "Your Office name: " << name << std::endl;
      std::cout << "Your salary is: " << salary << std::endl;
      std::cout << "Your salary expectation is: ";
      for (int chawani : salaryBreakup)
      {
        std::cout << chawani << " ";
      }
      std::cout << std::endl;
    }
};
int main()
{
  // user Defined Data type
  Salary me;
  me.name = "MajboorBadmassh";
  me.salary = 10000;
  me.salaryBreakup = {10000, 20000, 30000};
  me.printSalary();
  return 0;
}