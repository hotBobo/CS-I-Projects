#include <iostream>
#include "maze.hpp"


using std::cout; using std::cin; using std::endl;

void clearWalls(RoomPair walls[]) {
    for(int i = 0; i < numWalls; i++){
        walls[i].one.x = -1;
        walls[i].one.y = '*';
        walls[i].two.x = -1;
        walls[i].two.y = '*';
    }
}

bool goodDirection(const Room &rm, const char dr) {
    switch (dr) {
        case 'w':
            if(rm.y-1<startRoom.y){
                return false;
            } else {return true;}
            break;

        case 's':
            if(rm.y+1>cheeseRoom.y){
                return false;
            } else {return true;}
            break;

        case 'a':
            if(rm.x-1<startRoom.x){
                return false;
            } else {return true;}
            break;

        case 'd':
            if(rm.x+1>cheeseRoom.x){
                return false;
            } else {return true;}
            break;

        case 'q':
            cout << "Quitting";
            exit(1);
            break;
            
        default:
            cout << "Invalid Direction" << endl;
            return true;
            break;
    }
}

Room createAdjacent(const Room &rm, const char dr) {
    Room adj = rm;
    switch (dr) {
        case 'w':
            adj.y -= 1;
            return adj;
            break;

        case 's':
            adj.y += 1;
            return adj;
            break;

        case 'a':
            adj.x -= 1;
            return adj;
            break;

        case 'd':
            adj.x += 1;
            return adj;
            break;
        
        default:
            return adj;
            break;
    }
}

const Room pickAdjacent(const Room &rm) {
    char pick[4] = {'w','s','a','d'};
    while(true) {
        int i = rand() % 4;
        if(goodDirection(rm,pick[i])){
            Room adj = createAdjacent(rm, pick[i]);
            return adj;
        } else {continue;}
    }
}

const Room pickRoom() {
    int X = rand() % mazeSize + 1;
    char Y = 'a' + (rand() % mazeSize);
    Room rm = {X, Y};
    return rm;
}

const RoomPair pickPair(const Room &here) {
    Room r1 = here, r2 = pickAdjacent(r1);
    RoomPair pair = {r1,r2};
    return pair;
}

bool matchRoom(const Room& rm1, const Room& rm2) {
    if(rm1.x == rm2.x)
        return rm1.y == rm2.y;
    else
        return false;
}

bool matchPair(const RoomPair& pr1, const RoomPair& pr2) {
    if(matchRoom(pr1.one,pr2.one)){
        return matchRoom(pr1.two,pr2.two);
    }else if (matchRoom(pr1.one,pr2.two)){
        return matchRoom(pr1.two,pr2.one);
    }else {return false;}
}

bool checkMaze(const RoomPair pair[], const RoomPair &rp) {
    for(int i = 0; i < numWalls; i++) {
        if(matchPair(pair[i],rp)){
            return true;
        } else continue;
    }
    return false;
}

void build(RoomPair pair[]) {
    for(int i = 0; i < numWalls; i++) {
        pair[i] = pickPair(pickRoom());
    }
}

void printRoom(const Room& rum){
    cout << rum.y << rum.x;
}

void printPair(const RoomPair& rum) {
    printRoom(rum.one); cout << " "; printRoom(rum.two);
}

void printMaze(const RoomPair rum[]) {
    for (int i = 0; i < numWalls; i++) {
        printPair(rum[i]);
        if(i!=numWalls-1) cout << ", ";
    }
}

const Room nextMove(const Room& currentRoom) {
    char input;
    Room cRoom = currentRoom;
    cout << "Where would you like to move? (w,a,s,d)" << endl;
    cin >> input;
    if (goodDirection(currentRoom, input)) {
        cRoom = createAdjacent(currentRoom, input);
        return cRoom;
    } else {
        cout << "Out of Bounds" << endl;
        return currentRoom;
    }
}