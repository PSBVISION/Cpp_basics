#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Challenge: Create a program that asks the user if they want more tea. Keep asking them until they type "no" (case-insensitive), using a do-while loop.
    string answer;
    do
    {
        cout << "Do you want more tea (yes/no): ";
        getline(cin, answer);
    } while (answer != "no" && answer != "No" && answer != "NO" && answer != "n" && answer != "N");
    
    cout << "Okay, no more tea for you!" << endl;
    return 0;

}