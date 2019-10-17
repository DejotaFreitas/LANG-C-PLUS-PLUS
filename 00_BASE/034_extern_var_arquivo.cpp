// Primeiro Arquivo: main.cpp

#include <iostream>
int count ;
extern void write_extern();

main() {
   count = 5;
   write_extern();
}

//==============================================
// Segundo arquivo: support.cpp
#include <iostream>

extern int count;

void write_extern(void) {
   std::cout << "Count is " << count << std::endl;
}

//==============================================
//compilar arquivos
$g++ main.cpp support.cpp -o write

//resultado
5
