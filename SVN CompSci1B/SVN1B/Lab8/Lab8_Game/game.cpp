#include "maze.hpp"
#include <iostream>

using std::cout; using std::cin; using std::endl;

int main() {

    srand(1); // fixed seed
    
    Room cRoom = startRoom, nRoom;
    RoomPair game[numWalls], move;
    char input;
    bool check = true;
    clearWalls(game);
    build(game);

    do {
        cout << "Would you like to see the wall positions? (y/n) ";
        cin >> input;
        switch(input) {
            case 'y':
                cout << "Printing wall positions." << endl;
                printMaze(game);
                cout << endl;
                check = false;
                break;
            case 'n':
                check = false;
                break;
            default:
                cout << "Invalid Input" << endl;
                break;
        }
    } while(check); // Just to make sure the user puts in a valid input

    do {
        cout << "--------------------------------" << endl;
        cout << "Current Room: "; printRoom(cRoom); cout << endl;
        cout << "Cheese Room: "; printRoom(cheeseRoom); cout << endl << "Enter 'q' to quit." << endl;
        nRoom = nextMove(cRoom);
        move = {cRoom, nRoom};
        if (!checkMaze(game, move)) cRoom = nRoom;
        else cout << "WALL" << endl;
        if (matchRoom(cRoom, cheeseRoom)) check = true;

    } while(!check); // Actual game loop

    cout << "You Win!";

}