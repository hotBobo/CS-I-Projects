#include <iostream>
#include "swapFunc.hpp"

using std::cin; using std::cout; using std::endl;
void sort(int, int, int);

int main() {
  // inputs the numbers
  cout << "Enter three numbers: ";
  int X, Y, Z;
  cin >> X >> Y >> Z;
  sort(X,Y,Z);
}