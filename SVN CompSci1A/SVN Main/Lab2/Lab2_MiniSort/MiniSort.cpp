// the program attempts to sort three integers
// in increasing order, it is incomplete
// Mikhail Nesterenko
// 9/3/2009

#include <iostream>

using std::cin; using std::cout; using std::endl;

int main(){

  // inputs the numbers
  cout << "Enter three numbers: ";
  int x, y, z;
  int sort_Order;
  cin >> x >> y >> z;
  
  cout << "What order would you like the numbers to be sorted in? (1---> Increasing, 2 ---> Decreasing) ";
  cin >> sort_Order;
  
  int tmp;

  // orders x and y
  if (x > y){
    tmp = x;
    x = y;
    y = tmp;
  }

  // orders y and z
  if (y > z){
    tmp = y;
    y = z;
    z = tmp;
  }

  // orders x and y
  if (x > y){
    tmp = x;
    x = y;
    y = tmp;
  }
  
  if (sort_Order == 2){
    tmp = x;
    x = z;
    z = tmp;
  }
  
  // outputs the sorted numbers
  cout << "The sorted numbers are: ";
  cout << x << " " << y << " " << z << endl;
}