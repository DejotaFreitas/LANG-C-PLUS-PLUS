#include <iostream>
#include <stdlib.h>
using namespace std;

#include <iomanip>
using std::setw;

int main() {

  char string[] = "Hello";

  double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
  double salary = balance[0];

  int array_int[10]; //array inteiro com tamanho 10
  array_int[0] = 99;

  int array_zero[10] = {}; // todas posicoes iniciam com valor 00

  int array_ini[] = {1,5,6,5,9,8,7,1,3,10};
  int tamanho_array = sizeof(array_ini) / sizeof(array_ini[0]);
  for (int i = 0; i < tamanho_array; i++) {
    cout << i << endl;
  }

  int matriz[10][10]; //array bidimensional 10x10
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      matriz[i][j] = rand();
      cout << matriz[i][j] << ", ";
    }
    cout << endl;
  }


  // n is an array of 10 integers
  int n[ 10 ];
  // initialize elements of array n to 0
  for ( int i = 0; i < 10; i++ ) {
     n[ i ] = i + 100; // set element at location i to i + 100
  }
  cout << "Element" << setw( 13 ) << "Value" << endl;
  // output each array element's value
  for ( int j = 0; j < 10; j++ ) {
     cout << setw( 7 )<< j << setw( 13 ) << n[ j ] << endl;
  }




  system("pause");
  return 0;

}
