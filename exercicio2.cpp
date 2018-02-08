#include <iostream>
#include <fstream>
#include <string>


using namespace std;


int main(){

	string linha;
	string substr;

	ifstream arquivo ("/tmp/exercicio.txt");
	ofstream arquivoCopia ("/home/novo.txt");

	if (arquivo.is_open()) {
		while(!arquivo.eof()) {
			arquivo >> linha;
			substr = linha.substr(0, 5);
			if(substr != "Teste") {
				arquivoCopia << linha << endl;
			}

		}
		arquivo.close();
	}
	else cout << "Nao foi possivel abrir o arquivo";
}
