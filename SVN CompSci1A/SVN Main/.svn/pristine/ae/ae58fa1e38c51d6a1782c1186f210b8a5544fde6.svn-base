#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout; using std::cin; using std::endl;

int main() {

    srand(time(NULL));
    int pVal, cVal;
    char gamble;
    pVal = rand() % 13 + 1;
    cVal = rand() % 10 + 11;
    do {
        cout << "Your value is " << pVal << endl;
        cout << "Would you like to stand or hit (s/h)? ";
        cin >> gamble;
        if (gamble == 'h'){
            pVal += rand() % 13 + 1;
        }
    } while((gamble == 'h') && (pVal <= 21));
    cout << "Your value: " << pVal << endl;
    
    if (pVal > 21) {
        cout << "BUST";
    } else {
        cout << "Computer Value: " << cVal << endl;
        if (cVal > pVal) {
            cout << "YOU LOSE!";
        } else if (pVal > cVal) {
            cout << "YOU WIN!";
        } else {
            cout << "YOU TIE?";
        }
    }
}