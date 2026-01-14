#include <iostream>
#include "figures.hpp"

using std::cin; using std::cout; using std::endl;

int main() {
    int Size, shape;
    char Fig, type;
    while(true) {
        cout << "Select size:\n";
        cin >> Size;
        cout << "Select paint character:\n";
        cin >> Fig;
        cout << "1.Squre\n2.Slash\n3.X\n";
        cin >> shape;
        switch (shape) {
            case 1:
                cout << "Filled or Hollow? (f/h):\n";
                cin >> type;
                switch (type) {
                    case 'f':
                        filledSquare(Size,Fig);
                        break;
                    case 'h':
                        hollowSquare(Size,Fig);
                        break;
                    default:
                        cout << "Invalid Input\n";
                        return(0);
                }
                break;
            case 2:
                cout << "Backslash or Forewardslash? (b/f):\n";
                cin >> type;
                switch (type) {
                    case 'f':
                        slash(Size,Fig);
                        break;
                    case 'b':
                        backslash(Size,Fig);
                        break;
                    default:
                        cout << "Invalid Input";
                        return(0);
                }
                break;
            case 3:
                X(Size,Fig);
                break;
            default:
                cout << "Invalid Input";
                return(0);
        }
    }
}