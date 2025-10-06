#include <iostream>
#include <string>
using namespace std;
int main()
{
  // Challenge: A tea shop offers discounts based on the number of tea cups ordered. Write a program that checks the number of cups ordered and applies a discount:* More than 20 cups: 20% discount

  // + Between 10 and 20 cups: 10% discount

  // + Less than 10 cups: No discount
  int cups;
  double pricePerCup = 250, totalPrice, discountedPrice;
  cout << "Enter the number of cups: ";
  cin >> cups;
  if(cups > 20){
    discountedPrice =  0.2;
  }else if(cups >= 10 && cups <= 20){
    discountedPrice = 0.1;
  }else{
    discountedPrice = 0;
  }
  totalPrice = cups * pricePerCup;
  cout << "Total price: " << totalPrice << endl;
  cout << "Discounted price: " << totalPrice - (totalPrice * discountedPrice) << endl;
  return 0;
}