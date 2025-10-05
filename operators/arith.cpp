#include <iostream>
int main() {
  int a = 10, b = 20, c = 30, d = 40, e = 50, f = 60, g = 70, h = 80, i = 90, j = 100;
  std::cout << "a + b = " << (a + b) << std::endl;
  std::cout << "c - d = " << (c - d) << std::endl;
  std::cout << "e * f = " << (e * f) << std::endl;
  std::cout << "g / h = " << (g / h) << std::endl;
  std::cout << "i % j = " << (i % j) << std::endl;

  // Challenge: Create a program that calculates the total price of tea cups. The user inputs the number of cups they want and the price per cup. The program should calculate the total price, apply a 5% discount if the total is above a certain amount, and show the final price.
  int numCups;
  double pricePerCup, totalPrice, discountedPrice;
  std::cout << "Enter the number of cups: " ;
  std::cin >> numCups;
  std::cout << "Enter the price per cups: " ;
  std::cin >> pricePerCup;
  totalPrice = numCups * pricePerCup;
  if(totalPrice>100){
    discountedPrice = totalPrice - (totalPrice * 0.05);
    std::cout << "Discounted price: " << discountedPrice << std::endl;
  }else{
    std::cout << "Total price: " << totalPrice << std::endl;
  }
  return 0;
}