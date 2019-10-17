#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

  string str1 = "Hello ";
  string str2 = "World";
  string str3;

    // copy str1 into str3
  str3 = str1;
  cout << "str3 : " << str3 << endl;

  // concatenates str1 and str2
  cout << "CONCATENAR : " << str1 + str2 << endl;

  // total length of str3 after concatenation
  cout << "LENGHT STRING :  " << str3.size() << endl;

  return 0;

  system("pause");
  return 0;

}
