#include "maze.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cin; using std::cout; using std::endl;

Room::Room() {x_=-1; y_= '*';}
Room::Room(int x, char y) {x_=x;y_=y;}

// Room class Func

void Room::print() const {
    cout << y_ << x_;
}

void Room::pick() {
    x_ = rand() % mazeSize_ + 1;
    y_ = 'a' + (rand() % mazeSize_);
}

const Room Room::pickAdjacent() {
    char pick[4] = {'w','s','a','d'};
    while(true) {
        int i = rand() % 4;
        if(goodDirection(pick[i])){
            Room adj = createAdjacent(pick[i]);
            return adj;
        } else {continue;}
    }

}

const Room Room::nextMove() const {
    char input;
    Room cRoom(x_,y_);
    cout << "Current room: "; cRoom.print(); cout << endl;
    cout << "Where would you like to move? (w,a,s,d)" << endl;
    cin >> input;
    if (goodDirection(input)) {
        cRoom = createAdjacent(input);
        return cRoom;
    } else {
        cout << "Out of Bounds" << endl;
        return cRoom;
    }
}

bool Room::goodDirection(const char dr) const {
    Room startRoom, cheeseRoom;
    startRoom.makeStartRoom();
    cheeseRoom.makeCheeseRoom();
    switch (dr) {
        case 'w':
            if(y_-1<startRoom.y_){
                return false;
            } else {return true;}
            break;

        case 's':
            if(y_+1>cheeseRoom.y_){
                return false;
            } else {return true;}
            break;

        case 'a':
            if(x_-1<startRoom.x_){
                return false;
            } else {return true;}
            break;

        case 'd':
            if(x_+1>cheeseRoom.x_){
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

const Room Room::createAdjacent(const char dr) const {
    Room adj(x_,y_);
    switch (dr) {
        case 'w':
            adj.y_ -= 1;
            return adj;
            break;

        case 's':
            adj.y_ += 1;
            return adj;
            break;

        case 'a':
            adj.x_ -= 1;
            return adj;
            break;

        case 'd':
            adj.x_ += 1;
            return adj;
            break;
        
        default:
            return adj;
            break;
    }
}

bool matchRoom(const Room& a, const Room& b) {
    return a.x_==b.x_ && a.y_==b.y_;
}

//RoomPair class Func

void RoomPair::pick() {
    one_.pick();
    two_ = one_.pickAdjacent();
}

void RoomPair::print() const {
    one_.print(); cout << "|"; two_.print();
}

bool matchPair(const RoomPair& pr1, const RoomPair& pr2) {
    if(matchRoom(pr1.one_,pr2.one_)){
        return matchRoom(pr1.two_,pr2.two_);
    }else if (matchRoom(pr1.one_,pr2.two_)){
        return matchRoom(pr1.two_,pr2.one_);
    }else {return false;}
}

void Maze::print() const {
    cout << "Wall locations: ";
    for(int i = 0; i < numWalls_; i++) {
        walls_[i].print();
        if(i!=numWalls_-1) {cout << " ";}
    } cout << endl << "Mouse location: "; currentRoom_.print();
}

void Maze::build() {
    for(int i = 0; i < numWalls_; i++) {
        walls_[i].pick();
        if(checkMaze(walls_[i])) {i--;}
    }
}

bool Maze::move(const Room& rm) {
    RoomPair pair(rm,currentRoom_);
    if(checkMaze(pair) && matchRoom(rm,currentRoom_)==false) {
        currentRoom_ = rm;
        return true;
    } else {return false;}
}

bool Maze::checkMaze(const RoomPair& pair) const {
    for(int i = 0; i < numWalls_; i++) {
        if(matchPair(pair, walls_[i])){
            return false;
        } else continue;
    } return true;
}