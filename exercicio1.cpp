#include <fstream>
#include <iostream>
#include <windows.h>
#include <string>


using namespace std;

void insereDados(ofstream& arquivo) {
	int numero;
	for(numero = 1; numero <= 15; numero ++) {
		arquivo << numero << "\n";
	}
    arquivo << "Teste1\n";
    arquivo << "Nome\n";
    arquivo << "Teste11\n";
	arquivo << "Frase_teste\n";
	arquivo << "Teste2\n";
	arquivo << "O_Teste_22\n";
	arquivo << "XXavg12\n";
	arquivo << "54ggg|_aa\n";
	arquivo << "Teste13\n";
	arquivo << "Xicara\n";
	arquivo << "Desenvolvedor\n";
	arquivo << "Teste15\n";
	arquivo << "Software\n";
	arquivo << "Bicicleta\n";
	arquivo << "Teste100\n";
}

bool existeDiretorio(const std::string& dirName_in) {
	
  DWORD ftyp = GetFileAttributesA(dirName_in.c_str());
  
  if (ftyp == INVALID_FILE_ATTRIBUTES) return false; 
  if (ftyp & FILE_ATTRIBUTE_DIRECTORY) return true;  

  return false;   
}

int main () {
	
	if(!existeDiretorio("tmp")) {
		system("mkdir tmp");	
	}
	
	ofstream arquivo ("./tmp/exercicio.txt");
  
	if (arquivo.is_open()) {
		insereDados(arquivo);
		arquivo.close();
	}
	else cout << "Nao foi possivel abrir o arquivo";
	return 0;
}
