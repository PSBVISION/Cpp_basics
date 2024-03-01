#include <iostream>
int main() {
    // std::cout << "Hello, World!" << std::endl;
    // std::cout << "I am learning C++";
    // return 0;


//printing whole numbers
    // variables and data types

    //integers(whole numbers) 

    int x; //declaration
    x = 2; //assignment
    std::cout << x << '\n';


    int y = 9; //declaration and assignment
    std::cout << y << '\n';

    int sum = x + y;
    std::cout << sum << '\n';


    //double(include decimal points)

    double a = 3.54685;
    std::cout << a << '\n';


    //char(single character)

    char c = 'A';
    char d = '$';
    std::cout << c << '\n';
    std::cout << d << '\n';

    //boolean (true or false)
    bool power = false;
    bool isGreater = 10 > 9;

    std::cout << power << '\n';
    std::cout << isGreater << '\n';

    //string (sequence of characters)
    std::string name = "badmaash";
    std::string address = "kathmandu";

    std::cout << "My name is " << name << " and I live in " << address << '\n';


    //Namespace : Provides a solution to avoid name conflicts in large projects. Namespace allows for identical named entities to be declared in different scopes.

}
