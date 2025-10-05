#include <iostream>
using namespace std;

int main() {
    cout << "=== Assignment Operators in C++ ===" << endl;
    
    // 1. Simple Assignment Operator (=)
    cout << "\n1. Simple Assignment (=):" << endl;
    int a = 10;
    int b = a;  // b gets the value of a
    cout << "a = " << a << ", b = " << b << endl;
    
    // 2. Addition Assignment Operator (+=)
    cout << "\n2. Addition Assignment (+=):" << endl;
    int x = 5;
    cout << "x = " << x << endl;
    x += 3;  // equivalent to x = x + 3
    cout << "After x += 3: x = " << x << endl;
    
    // 3. Subtraction Assignment Operator (-=)
    cout << "\n3. Subtraction Assignment (-=):" << endl;
    int y = 10;
    cout << "y = " << y << endl;
    y -= 4;  // equivalent to y = y - 4
    cout << "After y -= 4: y = " << y << endl;
    
    // 4. Multiplication Assignment Operator (*=)
    cout << "\n4. Multiplication Assignment (*=):" << endl;
    int z = 6;
    cout << "z = " << z << endl;
    z *= 2;  // equivalent to z = z * 2
    cout << "After z *= 2: z = " << z << endl;
    
    // 5. Division Assignment Operator (/=)
    cout << "\n5. Division Assignment (/=):" << endl;
    int w = 20;
    cout << "w = " << w << endl;
    w /= 4;  // equivalent to w = w / 4
    cout << "After w /= 4: w = " << w << endl;
    
    // 6. Modulo Assignment Operator (%=)
    cout << "\n6. Modulo Assignment (%=):" << endl;
    int m = 17;
    cout << "m = " << m << endl;
    m %= 5;  // equivalent to m = m % 5
    cout << "After m %= 5: m = " << m << endl;
    
    // 7. Bitwise AND Assignment Operator (&=)
    cout << "\n7. Bitwise AND Assignment (&=):" << endl;
    int p = 12;  // Binary: 1100
    cout << "p = " << p << " (binary: 1100)" << endl;
    p &= 10;     // Binary: 1010, result: 1000 = 8
    cout << "After p &= 10: p = " << p << " (binary: 1000)" << endl;
    
    // 8. Bitwise OR Assignment Operator (|=)
    cout << "\n8. Bitwise OR Assignment (|=):" << endl;
    int q = 12;  // Binary: 1100
    cout << "q = " << q << " (binary: 1100)" << endl;
    q |= 10;     // Binary: 1010, result: 1110 = 14
    cout << "After q |= 10: q = " << q << " (binary: 1110)" << endl;
    
    // 9. Bitwise XOR Assignment Operator (^=)
    cout << "\n9. Bitwise XOR Assignment (^=):" << endl;
    int r = 12;  // Binary: 1100
    cout << "r = " << r << " (binary: 1100)" << endl;
    r ^= 10;     // Binary: 1010, result: 0110 = 6
    cout << "After r ^= 10: r = " << r << " (binary: 0110)" << endl;
    
    // 10. Left Shift Assignment Operator (<<=)
    cout << "\n10. Left Shift Assignment (<<=):" << endl;
    int s = 5;   // Binary: 101
    cout << "s = " << s << " (binary: 101)" << endl;
    s <<= 2;     // Shift left by 2 positions: 10100 = 20
    cout << "After s <<= 2: s = " << s << " (binary: 10100)" << endl;
    
    // 11. Right Shift Assignment Operator (>>=)
    cout << "\n11. Right Shift Assignment (>>=):" << endl;
    int t = 20;  // Binary: 10100
    cout << "t = " << t << " (binary: 10100)" << endl;
    t >>= 2;     // Shift right by 2 positions: 101 = 5
    cout << "After t >>= 2: t = " << t << " (binary: 101)" << endl;
    
    // Example with floating-point numbers
    cout << "\n=== Examples with floating-point numbers ===" << endl;
    double d = 15.5;
    cout << "d = " << d << endl;
    d += 2.3;
    cout << "After d += 2.3: d = " << d << endl;
    d *= 1.5;
    cout << "After d *= 1.5: d = " << d << endl;
    

    //Challenge: Write a program that allows a user to input the number of tea bags they have. Assign additional bags to them based on certain conditions (e.g., if they have fewer than 10 bags, give them 5 extra). Update the original number using assignment operators.

    cout << "Challenge" << endl;
    int numTeaBags;
    cout << "\nEnter the number of tea bags: ";
    cin >> numTeaBags;
    if(numTeaBags < 10){
      numTeaBags += 5;
    }
    cout << "Number of tea bags: " << numTeaBags << endl;

    return 0;
}