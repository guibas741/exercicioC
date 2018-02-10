#include<fstream>
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;




int main(int argc, char* argv[]) {
    ifstream myReadFile;
    int contador = 0;
    string line;


    int numerosArg = atoi(argv[2]);
    myReadFile.open(argv[1]);
    if (myReadFile.is_open()) {
        while (!myReadFile.eof()) {
            getline (myReadFile,line);
            if(contador == numerosArg) break;
            cout << line << endl;
            contador = contador + 1;

        }

        myReadFile.close();
    } else {
        cout << "O arquivo " << argv[1] << " nao existe"<< endl;
    }

}

