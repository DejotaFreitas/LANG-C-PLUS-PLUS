#include <iostream>       // std::cout
#include <thread>
using namespace std;   // std::thread

void foo() {
  std::cout << "foo...\n";
}

void bar(int x) {
  std::cout << "bar...\n";
}

int main() {

  std::thread first (foo);     // spawn new thread that calls foo()
  std::thread second (bar,0);  // spawn new thread that calls bar(0)

  std::cout << "main, foo and bar now execute concurrently...\n";

  // synchronize threads:
  first.join();                // pauses until first finishes
  second.join();               // pauses until second finishes

  std::cout << "foo and bar completed.\n";

  system("pause");
  return 0;
}
