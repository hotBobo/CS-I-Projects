#include <iostream>
#include <string>
#include <ctime>

using std::cout; using std::cin; using std::endl; using std::rand;
using std::string;

int main() {

    srand(time(NULL));
    string stuff;
    int max=90, min = 40;

    cout << "Input a line:\n";
    getline(cin, stuff);

    if(stuff.size() > max){
        cout << "Error, greater than 90 characters";
        exit(1);
    }
    while((stuff.size() < max) && (stuff.size() > min)) {
        int randNum = rand() % stuff.size();
        int space = stuff.find(' ', randNum);
        if (space == string::npos) continue;
        stuff.insert(space, " ");
    }
    cout << stuff << endl;

    cout << "Done!";
}