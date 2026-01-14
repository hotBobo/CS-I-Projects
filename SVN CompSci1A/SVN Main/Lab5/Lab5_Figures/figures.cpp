#include <iostream>
#include "figures.hpp"

using std::cin; using std::cout; using std::endl;

void filledSquare(int size, char fig){
    for(int i = 0; i < size; i++){
            for(int x = 0; x < size; x++){
                cout << fig;
            }
            cout << endl;
        }
}

void backslash(int size, char fig) {
        for(int i = 0; i < size; i++){
        for(int x = 0; x < i; x++){
            cout << " ";
        }
        cout << fig;
        cout << endl;
    }
}

void slash(int size, char fig) {
    int temp = size - 1;
    for(int i = 0; i < size; i++){
        for(int x = 0; x < temp; x++){
            cout << " ";
        }
        temp--;
        cout << fig;
        cout << endl;
    }
}

void hollowSquare(int size, char fig) {
        for(int i = 0; i < size; i++){
        
        if((i==0) || (i == size-1)){
            
            for(int x = 0; x<size; x++){
                cout << fig;
            }

        }else {
            cout << fig;
            for(int y = 0; y<size-2; y++){
                cout << " ";
            }
            cout << fig;
        }
        cout << endl;
    }
}

void X(int size, char fig) {
    for(int i = 0; i < size; i++){
        for(int x = 0; x < size; x++){
            if ((i == x) || (i==size-1-x) )  {
                cout << fig;
            } else {
                cout << " ";
            }
       }
       cout << endl;
    }
}