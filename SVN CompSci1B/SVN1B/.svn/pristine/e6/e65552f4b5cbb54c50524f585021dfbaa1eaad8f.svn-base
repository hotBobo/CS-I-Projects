#include "list.hpp"
#include <iostream>

using std::cout; using std::cin; using std::endl;

// prints the values in array "colPtr" of "size" 
void output(double *colPtr, int size) {
    for(int i = 0; i < size; i++) {
        cout << "| " << colPtr[i] << " ";
    }
    cout << "|" << endl;
}
// returns the index of the element in array "colPtr" of "size"
// that corresponds to the element holding "number"
// if number is not in the array, returns -1
int check(double *colPtr, double number, int size) {
    for (int i = 0; i < size; i++) {
        if (number == colPtr[i]) return i;
    }
    return -1;
}


// adds "number" to the array pointed to by "colPtr" of "size". 
// if the number is not already there, if "number" is there - no action
// Note, the size of the array is thus increased. 
void addNumber(double *& colPtr, double number, int &size) {
    if(check(colPtr, number, size) == -1){
        size++;
        double *b = new double[size];
        for (int i = 0; i < size-1; i++) {
            b[i] = colPtr[i];
        } b[size-1] = number;
        delete [] colPtr;
        colPtr = b;
    } else cout << "Duplicate!" << endl;
}

// removes a "number" from array "colPtr" of "size".
// if "number" is not there -- no action
// note, "size" changes
void removeNumber(double *& colPtr, double number, int &size) {
    if(check(colPtr, number, size) != -1){
        size--;
        double *b = new double[size];
        int j = 0;
        for (int i = 0; i < size + 1; i++) {
            if (colPtr[i] != number) {
                b[j] = colPtr[i];
                j++;
            }
        }
        delete [] colPtr;
        colPtr = b;
    } else cout << "Number not present!" << endl;
}
