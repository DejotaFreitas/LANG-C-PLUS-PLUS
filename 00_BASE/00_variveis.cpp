#include <iostream>
#include <stdlib.h>
using namespace std;

// Global variable declaration:
int g;

static int count = 10; /* Global variable static */

#define LENGTH 10 // Defining Constants
#define WIDTH  5 // Defining Constants

int main() {

  string str = "Hello ";
  char character = 'c'; // 1 byte
  wchar_t wchart = 'c'; // 2 or 4 bytes
  int inteiro = 2147483647; // 4 bytes
  unsigned int uinteiro = 4294967295; // 4 bytes
  short int intcurto = 32767; // 2 bytes
  unsigned short int	uintcurto = 65535; // 2 bytes
  long int	intlongo = 2147483647; // 4 bytes
  unsigned long int	uintlongo	= 4294967295; // 4 bytes
  float flutuante = 38.1234567; // 4 bytes
  double doubleflutuante = 38.123456789012345; // 8 bytes
  long double	doubleflutuantelongo = 38.123456789012345; // 8 bytes

  // Local variable declaration:
  int a, b, c;

  // actual initialization
  a = 10;
  b = 20;
  c = a + b;

  const int LENGTH2 = 20;
  const int WIDTH2  = 30;

  cout << "CONSTATN LENGTH E WIDTH: " << LENGTH << " : " << WIDTH << endl;
  cout << "CONSTATN2 LENGTH2 E WIDTH2: " << LENGTH2 << " : " << WIDTH2 << endl;

  // show size bytes
  cout << "Size of char : " << sizeof(char) << endl;
  cout << "Size of int : " << sizeof(int) << endl;
  cout << "Size of short int : " << sizeof(short int) << endl;
  cout << "Size of long int : " << sizeof(long int) << endl;
  cout << "Size of float : " << sizeof(float) << endl;
  cout << "Size of double : " << sizeof(double) << endl;
  cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

  system("pause");
  return 0;

}


// char	1byte	-127 to 127 or 0 to 255
// unsigned char	1byte	0 to 255
// signed char	1byte	-127 to 127
// int	4bytes	-2147483648 to 2147483647
// unsigned int	4bytes	0 to 4294967295
// signed int	4bytes	-2147483648 to 2147483647
// short int	2bytes	-32768 to 32767
// unsigned short int	Range	0 to 65,535
// signed short int	Range	-32768 to 32767
// long int	4bytes	-2,147,483,648 to 2,147,483,647
// signed long int	4bytes	same as long int
// unsigned long int	4bytes	0 to 4,294,967,295
// float	4bytes	+/- 3.4e +/- 38 (~7 digits)
// double	8bytes	+/- 1.7e +/- 308 (~15 digits)
// long double	8bytes	+/- 1.7e +/- 308 (~15 digits)
// wchar_t	2 or 4 bytes	1 wide character
