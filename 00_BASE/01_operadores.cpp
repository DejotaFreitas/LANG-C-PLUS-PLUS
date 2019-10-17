#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

  std::cout << "SOMA: " << 10 + 3 << endl;
  std::cout << "SUBTRAÇÂO: " << 10 - 3 << endl;
  std::cout << "MULTIPLICACAO: " << 10 * 3 << endl;
  std::cout << "DIVISAO: " << 10 / 3 << endl;
  std::cout << "RESTO DIVISAO: " << 10 % 3 << endl;

  std::cout << "IGUAL: " << (10 == 10) << endl;
  std::cout << "DIFERENTE: " << (10 != 10) << endl;
  std::cout << "MAIOR: " << (10 > 10) << endl;
  std::cout << "MENOR: " << (10 < 10) << endl;
  std::cout << "MAIOR IGUAL: " << (10 >= 10) << endl;
  std::cout << "MENOR IGUAL: " << (10 <= 10) << endl;

  std::cout << "E: " << (10 == 10 && 10 != 10) << endl;
  std::cout << "OU: " << (10 == 10 || 10 != 10) << endl;
  std::cout << "NEGACAO: " << !(10 == 10) << endl;

  std::cout << "OPERACAO TERNARIA: " << (10 == 10 ? 2 : 4) << endl;

  system("pause");
  return 0;

}

// Operadores de atribuição
// 10++
// 10--
// var += 10;
// var -= 10;
// var *= 10;
// var +/= 10;
// var %= 10;

//======================================================================
// Operadores bit a bit
// p 	q	 p&q p|q p^q
// 0 	0	  0	  0	  0
// 0 	1	  0	  1	  1
// 1	1	  1	  1	  0
// 1	0	  0	  1	  1
//
// Assuma se A = 60; e B = 13; agora em formato binário eles serão os seguintes
// A = 0011 1100
// B = 0000 1101
// A & B = 0000 1100
// A | B = 0011 1101
// A ^ B = 0011 0001
// ~ A = 1100 0011

// <<=	Esquerda e operador de atribuição.	C << = 2 é o mesmo que C = C << 2
// >>=	Operador de deslocamento e atribuição à direita.	C >> = 2 é o mesmo que C = C >> 2
// &=	Operador Bitwise AND assignment.	C & = 2 é o mesmo que C = C e 2
// ^=	Operador exclusivo de OR ou de atribuição de bits.	C ^ = 2 é o mesmo que C = C ^ 2
// |=
