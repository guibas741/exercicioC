#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;


bool existeDiretorio(const std::string& dirName_in) {
	
  DWORD ftyp = GetFileAttributesA(dirName_in.c_str());
  
  if (ftyp == INVALID_FILE_ATTRIBUTES) return false; 
  if (ftyp & FILE_ATTRIBUTE_DIRECTORY) return true;  

  return false;   
}


int main(){
	
	if(!existeDiretorio("home")) {
		system("mkdir home");	
	}

	string linha;
	string substr;
	
	ifstream arquivo ("./tmp/exercicio.txt");
	ofstream arquivoCopia ("./home/novo.txt");
  	
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
