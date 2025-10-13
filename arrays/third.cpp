#include<iostream>
using namespace std;

int totalCost(int cost[], int n){
  int total = 0;
  for(int i = 0; i < n; i++){
    total += cost[i];
  }
  return total;
}

int main(){
  int todayCost[7] = {1, 2, 3, 4, 5, 6, 7};
  cout << totalCost(todayCost, 7) << endl; 
  return 0;
}