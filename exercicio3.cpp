#include<fstream>
#include<iostream>

using namespace std;




int main(int argc, char* argv[]) {
    ifstream myReadFile;


    for(int i = 1; i < argc; i++) {

        myReadFile.open(argv[i]);
        if (myReadFile.is_open()) {
            cout << "O arquivo " << argv[i] << " existe" << endl;
            myReadFile.close();
        } else {
            cout << "O arquivo " << argv[i] << " nao existe"<< endl;
        }
    }
