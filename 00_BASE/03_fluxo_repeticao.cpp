#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

  char nome[] = "Dejota Freitas";
  int index = 0;
  while (nome[index]) {
    std::cout << nome[index++];
  }


  for( ; ; ) {  printf("loop infinito.\n");  }


  system("pause");
  return 0;

}
