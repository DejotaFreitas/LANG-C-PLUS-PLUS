#include <iostream>
#include <stdlib.h>

using namespace std;

int suma(int a, int b = 20) {
   return a + b;
}

// function declaration
int max(int num1, int num2);


int main () {

  cout << "Soma : " << suma(200, 201) << endl;
  cout << "Max : " << max(200, 201) << endl;


   system("pause");
   return 0;
}

// function scopo
int max(int num1, int num2) {
   if (num1 > num2)
      return num1;
   else
      return num2;
}
