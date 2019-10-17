#include <iostream>
#include <stdlib.h>

using namespace std;

struct Pessoa {
  string nome;
  string sobrenome;
  int idade;
};

void printPessoa(struct Pessoa p) {
  cout << "Nome: " + p.nome + ", Sobrenome: " + p.sobrenome + ", idade: " << p.idade << endl;
}

void printPessoaPonteiro(struct Pessoa *p) {
  cout << "Nome: " + p->nome + ", Sobrenome: " + p->sobrenome + ", idade: " << p->idade << endl;
}

int main() {

  Pessoa p;
  p.nome = "Dejota";
  p.sobrenome = "Freitas";
  p.idade = 28;

  printPessoa(p);
  printPessoaPonteiro(&p);

  system("pause");
  return 0;

}
