#include <iostream>
#include <fstream>
#include <string>
#include <ctime>


using std::cout; using std::cin; using std::endl; using std::rand;
using std::string; using std::ifstream; using std::ofstream;

int main() {

    srand(time(NULL));
    ifstream fin; ofstream fout;
    string in, out, stuff;
    int max=90, min = 40;

    cout << "Input File:\n";
    cin >> in;
    cout << "Output File:\n";
    cin >> out;

    fin.open(in);
    fout.open(out);
    if(fin.fail()){
        cout << "No such file";
        exit(1);
    }

    while(getline(fin,stuff)){
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
        fout << stuff << endl;
    }

    cout << "Done!";
}
