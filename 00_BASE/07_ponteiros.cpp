#include <iostream>
#include <stdlib.h>

using namespace std;
// usando ponteiro para parametros de referencia
int func_pont(int* var) {
  *var = 123;
}

int main() {

  int  var = 20;   // variable
  int* ip = &var;  // criar e receber o ponteiro da variavel

  cout << "valor variavel: " << var << endl;
  cout << "id do ponteiro: " << ip << endl;
  cout << "valor do ponteiro: " << *ip << endl;



  int i = 10;
  int* ponteiro = &i; // recebendo referencia de memoria da variavel i
  *ponteiro = 5; // referenciando poneteiro
  func_pont(ponteiro); // recebe ponteiro por parametro
  func_pont(&i); // recebe referencia de memoria por parametro
  cout << *ponteiro << '\n';


  int* pont_vector = new int[3];
  *(pont_vector+0) = 100; //referenciando ponteiro de votor
  *(pont_vector+1) = 200;
  *(pont_vector+2) = 300;
  cout << *(pont_vector) << '\n'; //esta apontando para posicao 0 do array
  cout << *(pont_vector+1) << '\n'; //esta apontando para posicao 1 do array
  cout << *(pont_vector+2) << '\n'; //esta apontando para posicao 2 do array
  for (int i = 0; i < 3; i++) {
    std::cout << *(pont_vector+i) << '\n';
  }

  // desalocando poteiros da memoria
  delete ponteiro;
  ponteiro = NULL;
  delete[] pont_vector;
  pont_vector = NULL;

  system("pause");
  return 0;
}
