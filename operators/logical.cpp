#include <iostream>
using namespace std;

int main() {
    cout << "=== Logical Operators in C++ ===" << endl;
    
    // Define boolean variables for demonstration
    bool a = true;
    bool b = false;
    
    cout << "Variables: a = " << a << ", b = " << b << endl;
    cout << "(Note: 1 = true, 0 = false)" << endl;
    cout << endl;
    
    // 1. Logical AND operator (&&)
    cout << "1. Logical AND (&&):" << endl;
    cout << "a && b: " << (a && b) << " (false)" << endl;
    cout << "a && true: " << (a && true) << " (true)" << endl;
    cout << "false && false: " << (false && false) << " (false)" << endl;
    cout << endl;
    
    // 2. Logical OR operator (||)
    cout << "2. Logical OR (||):" << endl;
    cout << "a || b: " << (a || b) << " (true)" << endl;
    cout << "false || false: " << (false || false) << " (false)" << endl;
    cout << "true || false: " << (true || false) << " (true)" << endl;
    cout << endl;
    
    // 3. Logical NOT operator (!)
    cout << "3. Logical NOT (!):" << endl;
    cout << "!a: " << (!a) << " (false)" << endl;
    cout << "!b: " << (!b) << " (true)" << endl;
    cout << "!true: " << (!true) << " (false)" << endl;
    cout << "!false: " << (!false) << " (true)" << endl;
    cout << endl;
    
    // Practical example with numbers
    cout << "=== Practical Example ===" << endl;
    int age = 20;
    int score = 85;
    
    cout << "Age: " << age << ", Score: " << score << endl;
    
    // Using logical operators in conditions
    bool canDrive = (age >= 18);
    bool passedTest = (score >= 80);
    bool getsCertificate = canDrive && passedTest;
    
    cout << "Can drive (age >= 18): " << canDrive << endl;
    cout << "Passed test (score >= 80): " << passedTest << endl;
    cout << "Gets certificate (can drive AND passed test): " << getsCertificate << endl;
    


    //Challenge: Create a program that checks if a user is eligible for a tea subscription discount. The discount applies if the user is either a student or has purchased more than 15 cups. Ask the user to input their status (student or not) and their cup count.
    cout << "\n\n=== Challenge ===" << endl;
    bool isStudent;
    int cupCount;
    cout << "Enter your status (1 for yes and 0 for no): " ;
    cin >> isStudent;
    cout << "Enter the number of cups: " ;
    cin >> cupCount;
    if(isStudent || cupCount>15){
        cout << "You are eligible for a tea subscription discount." << endl;
    }else{
        cout << "You are not eligible for a tea subscription discount." << endl;
    }
    return 0;
}