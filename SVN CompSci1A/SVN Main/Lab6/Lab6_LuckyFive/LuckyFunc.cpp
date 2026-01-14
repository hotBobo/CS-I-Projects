#include <iostream>
#include <cstdlib>
#include <ctime>
#include "LuckyFunc.hpp"

using std::cin; using std::cout; using std::endl;

void assemble(int Yay[]){
    for(int i=0;i<winNum;i++){
        Yay[i]=-1;
    }
}

void draw(int yay[]) {
    srand(time(NULL));
    for(int i=0;i<winNum;i++) {
        yay[i] = rand() % 100;
        for(int x=0;x<i;x++) {
            if(yay[i]==yay[x]) {
                i--;
                break;
                
            }
        }
    }
}

bool check(int play, int yaY[]) {
    for(int h=0;h<winNum;h++) {
        if(play==yaY[h]) {
            return true;
        }
    }
    return false;
}

