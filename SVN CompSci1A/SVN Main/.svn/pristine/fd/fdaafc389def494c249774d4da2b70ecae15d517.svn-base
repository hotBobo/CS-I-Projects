#include <iostream>
#include <cmath>

using std::cout; using std::cin; using std::endl;

double bmrWomen(double,double,double);
double bmrMen(double,double,double);

int main() {

    char gender;
    double weight, height, age, bmr;
    int cookie, cal = 150;
    cout << "Enter your gender: (m/f) ";
    cin >> gender;
    cout << "Enter your weight, height, and age: ";
    cin >> weight >> height >> age;
    switch (gender) {
        case 'm':
            bmr = bmrMen(weight,height,age);
            break;
        case 'f':
            bmr = bmrWomen(weight,height,age);
            break;
        default:
            cout << "Invalid gender";
            return(0);
    }
    cookie = bmr/cal;
    cout << "Your BMR is " << bmr << endl << "Your cookies is " << cookie;

}

double bmrWomen(double lbs, double in, double yrs) {
    return (655 + (4.3 * lbs) + (4.7 * in) - (4.7 * yrs));
}

double bmrMen(double lbs, double in, double yrs) {
    return (66 + (6.3 * lbs) + (12.9 * in) - (6.8 * yrs));
}
