#include <iostream>
#include <stdlib.h>
using namespace std;



namespace namespace_name1 {
   // code declarations
   namespace namespace_name2 {
      // code declarations
   }
}
// to access members of namespace_name2
using namespace namespace_name1::namespace_name2;
// to access members of namespace:name1
using namespace namespace_name1;



// first name space
namespace first_space {
   void func() {
      cout << "Inside first_space" << endl;
   }
}
// second name space
namespace second_space {
   void func() {
      cout << "Inside second_space" << endl;
   }
}
using namespace second_space;



int main() {

  // Calls function from first name space.
   func();

   // Calls function from second name space.
   first_space::func();

  system("pause");
  return 0;

}
