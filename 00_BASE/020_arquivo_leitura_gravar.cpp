#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

int main() {

  string linha;

  // ABRINDO ARQUIVO NO MODO DE ESCRITA: ofstream
  ofstream arquivoEscrever;
  arquivoEscrever.open("zfile.dat", ios::out | ios::app);

  cout << "NOME: ";
  getline (cin, linha); // ENTRADA DE TEXTO DO CONSOLE
  arquivoEscrever << linha << endl; // ESCREVENDO NO ARQUIVO O NOME

  cout << "IDADE: ";
  getline (cin, linha); // ENTRADA DE TEXTO DO CONSOLE
  arquivoEscrever << linha << endl; // ESCREVENDO NO ARQUIVO A IDADE

  arquivoEscrever.close();  // FECHANDO O ARQUIVO.

  // =========================================================

  // ABRINDO ARQUIVO NO MODO DE LEITURA: ifstream
  ifstream arquivoLer;
  arquivoLer.open("zfile.dat");
  if (arquivoLer.is_open()) { // VERIFICANDO SE ARQUIVO ESTA ABERTO
    while (!arquivoLer.eof()) { // RETORNA FALSO SE NÃO ESTIVER NO FM DO ARQUIVO
      getline(arquivoLer, linha); // LENDO LINHA DO ARQUIVO
      cout << linha << endl; // EXIBINDO CONTEUDO DO ARQUIVO NA CONSOLE
    }
  } else {
    cout << "Arquivo não poder ser lido." << endl;
  }

  arquivoLer.close(); // FECHANDO ARQUIVO.

  system("pause");
  return 0;

}
