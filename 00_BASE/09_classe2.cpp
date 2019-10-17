#include <iostream>
#include <stdlib.h>
using namespace std;

class Box {

  int privada;   // Private Variable

  protected: // Variavel Protegida Heranca
    double width;

  public: // Variavel Publica
    double length;
    double breadth;
    double height;
    static int estatica; // Static variable

    // Constructor
    Box() {
      Box::estatica++;
    }

    // Constructor
    Box(double length, double height, double breadth) {
      this->length = length;
      this->breadth = breadth;
      this->height = height;
      Box::estatica++;
    }

    // Destructor
    ~Box() {
      cout << "Box Destructor" << endl;
    }

    double getVolume() {
      return this->length * this->breadth * this->height;
    }

    int getPrivada () {
     return this->privada;
    }

    int setPrivada (int privada) {
     this->privada = privada;
    }

    static int getEstatica() {
      return Box::estatica;
    }

};

// Initialize static variavel
int Box::estatica = 0;

int main() {

  Box Box0(5.6, 4.8, 6.8);
  cout << "Volume of Box2 : " << Box0.getVolume() <<endl;

  Box Box1;
  Box1.height = 5.0;
  Box1.length = 6.0;
  Box1.breadth = 7.0;
  cout << "Volume of Box1 : " << Box1.getVolume() <<endl;

  Box1.setPrivada(10000000);
  cout << "Private Box1 : " << Box1.getPrivada() << endl;

  cout << "Estatica Box : " <<  Box::getEstatica() << endl;

  system("pause");
  return 0;

}
