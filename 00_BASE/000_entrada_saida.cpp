#include <iostream>

using namespace std;

struct Pessoa {
  string nome;
  string sobrenome;
  int idade;
};

int main() {

  char name[50];

  cout << "INSIRA SEU NOME: ";
  cin >> name;
  cout << "SEU NOME EH: " << name << endl;

  cerr << "MENSAGEM DE ERRO : " << name << endl;
  clog << "MENSAGEM DE ERRO : " << name << endl;

  system("pause");
  return 0;

}
