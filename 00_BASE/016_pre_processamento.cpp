#include <iostream>
#include <stdlib.h>
using namespace std;

#define MIN(a,b) (((a)<(b)) ? a : b)

#define MKSTR( x ) #x

int main() {

  cout <<"MIN: " << MIN(121, 212) << endl;

  cout << MKSTR(HELLO C++) << endl;

  cout << "Value of __LINE__ : " << __LINE__ << endl;
  cout << "Value of __FILE__ : " << __FILE__ << endl;
  cout << "Value of __DATE__ : " << __DATE__ << endl;
  cout << "Value of __TIME__ : " << __TIME__ << endl;



  #ifdef DEBUG
     cerr <<"Trace: Inside main function" << endl;
  #endif
  #if 0
     /* This is commented part */
     cout << MKSTR(HELLO C++) << endl;
  #endif
  #ifdef DEBUG
   cerr <<"Trace: Coming out of main function" << endl;
   #endif


  system("pause");
  return 0;
}
