#include<fstream>
#include<iostream>
#include <sys/stat.h>

using namespace std;




int main(int argc, char* argv[]) {
    struct stat st;
    for(int i = 1; i < argc; i ++) {
        if(stat(argv[i],&st) == 0) cout << "Diretorio " << argv[i] << " encontrado" << endl;
        else cout << "Diretorio " << argv[i] << " nao encontrado" << endl;
    }
    return 0;
}

