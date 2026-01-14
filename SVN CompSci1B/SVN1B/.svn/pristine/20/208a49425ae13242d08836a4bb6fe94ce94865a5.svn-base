#include "list.hpp"
#include <iostream>

using std::cout; using std::cin; using std::endl;

int main(){

    bool done = false;
    int size = 0;
    double num, *a = new double[size];
    char input;
    do {
        cout << "Enter Operation [a/r/q] and number: ";
        cin >> input;
        switch(input) {
            case 'a':
                cin >> num;
                addNumber(a, num, size);
                break;
            case 'r':
                cin >> num;
                removeNumber(a, num, size);
                break;
            case 'q':
                done = true;
                cout << "Quitting!";
                continue;
            default:
                cout << "Invalid option" << endl;
                continue;
        }
        cout << "Your numbers: "; output(a,size);
    } while (!done);

}