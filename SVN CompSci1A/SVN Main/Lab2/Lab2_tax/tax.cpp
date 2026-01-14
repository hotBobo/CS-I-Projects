// Daniel Pilipchuk
#include <iostream>
using std::cin; using std::cout; using std::endl;
//testing changes
int main(){
    
    double earnings;
    char code;
    double mine;
    double yours;

    cout << "Employee Earnings: $";
    cin >> earnings;
    cout << "Employee Code: ";
    cin >> code;

    switch (code) {

        case 'd':
            mine = .15 * earnings;
            yours = earnings - mine;
            cout << "Amount to withhold: $" << mine << endl << "Take Home: $" << yours;
            break;

        case 'f':
            mine = .2 * earnings;
            yours = earnings - mine;
            cout << "Amount to withhold: $" << mine << endl << "Take Home: $" << yours;
            break;

        case 'h':
            mine = .6 * earnings;
            yours = earnings - mine;
            cout << "Amount to withhold: $" << mine << endl << "Take Home: $" << yours;
            break;

        case 'o':
            mine = .65 * earnings;
            yours = earnings - mine;
            cout << "Amount to withhold: $" << mine << endl << "Take Home: $" << yours;
            break;

        default:
            cout << "Unknown employee code: " << code;
            break;

    }

}