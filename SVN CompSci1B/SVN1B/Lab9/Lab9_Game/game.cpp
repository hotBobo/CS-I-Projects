#include <iostream>
#include "maze.hpp"
using std::cout; using std::cin; using std::endl;

int main() {

    bool win = false;
    Maze maze;
    maze.build();
    maze.start();
    Room cRoom = maze.getCurrentRoom(), cheese, nextRoom;
    cheese.makeCheeseRoom();
    maze.print(); cout << endl;
    while (!win) {
        nextRoom = cRoom.nextMove();
        if(maze.move(nextRoom)) {cout << "Moved!"; cout << endl;}
        else {cout << "Can't go there!"; cout << endl;}
        cRoom = maze.getCurrentRoom();
        if(matchRoom(cRoom,cheese)) {win = true;}
    } cout << "You Won!";

}