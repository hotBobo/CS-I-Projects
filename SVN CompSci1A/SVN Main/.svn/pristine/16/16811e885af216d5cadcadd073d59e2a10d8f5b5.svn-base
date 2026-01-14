#include <iostream>
#include <cmath>

using std::cout; using std::cin; using std::endl;

int main() {

    int op;
    double base, exp, answ;
    
    do {
        cout << "1. absolute value\n2. square root\n3. floor\n4. power\nSelect an operation: ";
        cin >> op;
        if ((op > 0) && (op < 5)) {
            cout << "Enter base: ";
            cin >> base;
        }
        if (op == 4) {
            cout << "Enter exponent: ";
            cin >> exp;
        }
        switch (op){
            case 1:
                cout << "The result is: " << abs(base) << endl;
                break;
            case 2:
                cout << "The result is: " << sqrt(base) << endl;
                break;
            case 3:
                cout << "The result is: " << floor(base) << endl;
                break;
            case 4:
                cout << "The result is: " << pow(base, exp) << endl;
                break;
            default:
                cout << "Invalid operation";
                break;
        }
    } while ((op < 5) && (op > 0));
}