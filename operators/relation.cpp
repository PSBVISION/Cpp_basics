#include <iostream>
using namespace std;

int main() {
    cout << "=== Relational Operators in C++ ===" << endl;
    
    // Define some variables for comparison
    int a = 10, b = 20, c = 10;
    
    cout << "Variables: a = " << a << ", b = " << b << ", c = " << c << endl;
    cout << endl;
    
    // 1. Equal to operator (==)
    cout << "1. Equal to (==):" << endl;
    cout << "a == b: " << (a == b) << " (false)" << endl;
    cout << "a == c: " << (a == c) << " (true)" << endl;
    cout << "10 == 10: " << (10 == 10) << " (true)" << endl;
    cout << endl;
    
    // 2. Not equal to operator (!=)
    cout << "2. Not equal to (!=):" << endl;
    cout << "a != b: " << (a != b) << " (true)" << endl;
    cout << "a != c: " << (a != c) << " (false)" << endl;
    cout << "5 != 8: " << (5 != 8) << " (true)" << endl;
    cout << endl;
    
    // 3. Less than operator (<)
    cout << "3. Less than (<):" << endl;
    cout << "a < b: " << (a < b) << " (true)" << endl;
    cout << "b < a: " << (b < a) << " (false)" << endl;
    cout << "a < c: " << (a < c) << " (false)" << endl;
    cout << "3 < 7: " << (3 < 7) << " (true)" << endl;
    cout << endl;
    
    // 4. Greater than operator (>)
    cout << "4. Greater than (>):" << endl;
    cout << "a > b: " << (a > b) << " (false)" << endl;
    cout << "b > a: " << (b > a) << " (true)" << endl;
    cout << "a > c: " << (a > c) << " (false)" << endl;
    cout << "15 > 12: " << (15 > 12) << " (true)" << endl;
    cout << endl;
    
    // 5. Less than or equal to operator (<=)
    cout << "5. Less than or equal to (<=):" << endl;
    cout << "a <= b: " << (a <= b) << " (true)" << endl;
    cout << "b <= a: " << (b <= a) << " (false)" << endl;
    cout << "a <= c: " << (a <= c) << " (true)" << endl;
    cout << "5 <= 5: " << (5 <= 5) << " (true)" << endl;
    cout << "3 <= 7: " << (3 <= 7) << " (true)" << endl;
    cout << endl;
    
    // 6. Greater than or equal to operator (>=)
    cout << "6. Greater than or equal to (>=):" << endl;
    cout << "a >= b: " << (a >= b) << " (false)" << endl;
    cout << "b >= a: " << (b >= a) << " (true)" << endl;
    cout << "a >= c: " << (a >= c) << " (true)" << endl;
    cout << "9 >= 9: " << (9 >= 9) << " (true)" << endl;
    cout << "12 >= 8: " << (12 >= 8) << " (true)" << endl;
    cout << endl;
    
    // Examples with different data types
    cout << "=== Examples with different data types ===" << endl;
    
    // With floating-point numbers
    double x = 3.14, y = 2.71;
    cout << "Floating-point comparison:" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "x > y: " << (x > y) << " (true)" << endl;
    cout << "x == 3.14: " << (x == 3.14) << " (true)" << endl;
    cout << endl;
    
    // With characters
    char char1 = 'A', char2 = 'B';
    cout << "Character comparison:" << endl;
    cout << "char1 = '" << char1 << "', char2 = '" << char2 << "'" << endl;
    cout << "char1 < char2: " << (char1 < char2) << " (true, ASCII value comparison)" << endl;
    cout << "'z' > 'a': " << ('z' > 'a') << " (true)" << endl;
    cout << endl;
    
    // Practical example: conditional statements
    cout << "=== Practical Example: Age Verification ===" << endl;
    int age = 18;
    cout << "Age: " << age << endl;
    
    if (age >= 18) {
        cout << "You are an adult (age >= 18)" << endl;
    } else {
        cout << "You are a minor (age < 18)" << endl;
    }
    
    if (age == 18) {
        cout << "You just became an adult!" << endl;
    }
    
    cout << endl;
    
    // Chaining comparisons
    cout << "=== Chaining Comparisons ===" << endl;
    int num = 15;
    cout << "num = " << num << endl;
    
    if (num >= 10 && num <= 20) {
        cout << "num is between 10 and 20 (inclusive)" << endl;
    }
    
    bool isInRange = (num > 5) && (num < 25);
    cout << "Is num in range (5, 25)? " << isInRange << " (true)" << endl;
    

    // Challenge: A tea shop offers a loyalty program. Customers who buy more than 20 cups of tea get a special "Gold" badge, and those who buy 10 to 20 cups get a "Silver" badge. Write a program to display the badge they will receive based on the number of cups they buy.

    cout<<"\n\n=== Challenge: Tea Shop Loyalty Program ==="<<endl;
    int cups;
    cout<<"Enter the number of cups: ";
    cin>>cups;
    if(cups>20){
        cout<<"You will receive a Gold badge."<<endl;
    }else if(cups>=10 && cups<=20){
        cout<<"You will receive a Silver badge."<<endl;
    }else{
        cout<<"You will not receive a badge."<<endl;
    }
    return 0;
}