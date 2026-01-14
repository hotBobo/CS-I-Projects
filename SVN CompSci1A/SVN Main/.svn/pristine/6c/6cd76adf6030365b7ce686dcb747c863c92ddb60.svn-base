#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {

    int size;
    char fig;

    cout << "Input figure size: ";
    cin >> size;
    cout << "Input paint character: ";
    cin >> fig;

    //Square
    for(int i = 0; i < size; i++){
        for(int x = 0; x < size; x++){
            cout << fig;
        }
        cout << endl;
    }

    // Backslash
    for(int i = 0; i < size; i++){
        for(int x = 0; x < i; x++){
            cout << " ";
        }
        cout << fig;
        cout << endl;
    }
    int temp = size - 1;
    //Slash
    for(int i = 0; i < size; i++){
        for(int x = 0; x < temp; x++){
            cout << " ";
        }
        temp--;
        cout << fig;
        cout << endl;
    }

    //Square but hollow
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
    temp = size;
    
    //Final Boss X
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