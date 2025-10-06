#include <iostream>
#include <bitset>
using namespace std;

void printBinary(int num, string label) {
    cout << label << " = " << num << " (Binary: " << bitset<8>(num) << ")" << endl;
}

int main() {
    cout << "=== BITWISE OPERATORS IN C++ ===" << endl << endl;
    
    // Initialize two numbers for demonstration
    int a = 12;  // Binary: 00001100
    int b = 10;  // Binary: 00001010
    
    cout << "Initial values:" << endl;
    printBinary(a, "a");
    printBinary(b, "b");
    cout << endl;
    
    // 1. Bitwise AND (&)
    cout << "1. BITWISE AND (&):" << endl;
    cout << "   Performs AND operation on each bit pair" << endl;
    int andResult = a & b;
    printBinary(andResult, "a & b");
    cout << "   12 & 10 = " << andResult << endl << endl;
    
    // 2. Bitwise OR (|)
    cout << "2. BITWISE OR (|):" << endl;
    cout << "   Performs OR operation on each bit pair" << endl;
    int orResult = a | b;
    printBinary(orResult, "a | b");
    cout << "   12 | 10 = " << orResult << endl << endl;
    
    // 3. Bitwise XOR (^)
    cout << "3. BITWISE XOR (^):" << endl;
    cout << "   Performs XOR operation on each bit pair" << endl;
    int xorResult = a ^ b;
    printBinary(xorResult, "a ^ b");
    cout << "   12 ^ 10 = " << xorResult << endl << endl;
    
    // 4. Bitwise NOT (~)
    cout << "4. BITWISE NOT (~):" << endl;
    cout << "   Inverts all bits (1s become 0s, 0s become 1s)" << endl;
    int notA = ~a;
    int notB = ~b;
    printBinary(notA, "~a");
    printBinary(notB, "~b");
    cout << "   ~12 = " << notA << ", ~10 = " << notB << endl << endl;
    
    // 5. Left Shift (<<)
    cout << "5. LEFT SHIFT (<<):" << endl;
    cout << "   Shifts bits to the left by specified positions" << endl;
    int leftShift1 = a << 1;
    int leftShift2 = a << 2;
    printBinary(a, "Original a");
    printBinary(leftShift1, "a << 1");
    printBinary(leftShift2, "a << 2");
    cout << "   12 << 1 = " << leftShift1 << " (multiply by 2)" << endl;
    cout << "   12 << 2 = " << leftShift2 << " (multiply by 4)" << endl << endl;
    
    // 6. Right Shift (>>)
    cout << "6. RIGHT SHIFT (>>):" << endl;
    cout << "   Shifts bits to the right by specified positions" << endl;
    int num = 24;  // Use a larger number for better demonstration
    printBinary(num, "Original num");
    int rightShift1 = num >> 1;
    int rightShift2 = num >> 2;
    printBinary(rightShift1, "num >> 1");
    printBinary(rightShift2, "num >> 2");
    cout << "   24 >> 1 = " << rightShift1 << " (divide by 2)" << endl;
    cout << "   24 >> 2 = " << rightShift2 << " (divide by 4)" << endl << endl;
    
    // Practical Examples
    cout << "=== PRACTICAL EXAMPLES ===" << endl << endl;
    
    // Check if a number is even or odd using bitwise AND
    cout << "Check if number is even or odd:" << endl;
    int numbers[] = {15, 16, 23, 24};
    for(int num : numbers) {
        if(num & 1) {
            cout << num << " is odd (last bit is 1)" << endl;
        } else {
            cout << num << " is even (last bit is 0)" << endl;
        }
    }
    cout << endl;
    
    // Swap two numbers using XOR
    cout << "Swap two numbers using XOR:" << endl;
    int x = 25, y = 30;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    cout << "After swap:  x = " << x << ", y = " << y << endl << endl;
    
    // Set, clear, and toggle specific bits
    cout << "Bit manipulation techniques:" << endl;
    int value = 5;  // Binary: 00000101
    printBinary(value, "Original value");
    
    // Set bit at position 1 (0-indexed from right)
    int setBit = value | (1 << 1);
    printBinary(setBit, "Set bit 1");
    
    // Clear bit at position 2
    int clearBit = value & ~(1 << 2);
    printBinary(clearBit, "Clear bit 2");
    
    // Toggle bit at position 3
    int toggleBit = value ^ (1 << 3);
    printBinary(toggleBit, "Toggle bit 3");
    
    return 0;
}