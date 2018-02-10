#include <iostream>

#include <stdlib.h>

#include <string>

#include <stdio.h>



using namespace std;





void printRoutes(string cmd){

	string result;

	FILE * stream;

	char buffer[2000];

	stream = popen(cmd.c_str(), "r");
    while(!feof(stream))
        if(fgets(buffer, 2000, stream) != NULL){
            result = string(buffer);
            result = result.substr(0,48);
            cout << result << endl;
	}

	pclose(stream);
}


int main(){

	printRoutes("route -n");
	return 0;
}


