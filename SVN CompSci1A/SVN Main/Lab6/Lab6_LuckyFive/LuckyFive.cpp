#include <iostream>
#include "LuckyFunc.hpp"

using std::cin; using std::cout; using std::endl;
void assemble(int []);
void draw(int []);
bool check(int,int []);

int main() {
    int YAY[winNum];
    int cool;
    bool win=false;
    assemble(YAY);
    draw(YAY);
    for(int o=0; o<5;o++) {
        cout << "Enter a number from 0-99: ";
        cin >> cool;
        if(check(cool,YAY)){
            win=true;
            break;
        }     
    }
    if(win==true) {
            cout << "WINNER";
    } else {
            cout << "LOSER";
        }
    cout << endl << "The winning numbers were: "; 
    for (int p=0;p<winNum;p++) {
        cout << YAY[p] << " ";
    }

}