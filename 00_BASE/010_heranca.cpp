#include <iostream>
#include <stdlib.h>
using namespace std;

class Box {
   protected:
      int width = 30;
      int height = 30;
  public:
      Box( int a = 0, int b = 0){
         width = a;
         height = b;
      }
      virtual int getArea() = 0; //metodo abstrato obrigado a ser implementado
};
class Rectangle: public Box {
  protected:
    int width = 20;
    int height = 20;
  public:
    Rectangle( int a = 1, int b = 1):Box( a, b ) { //construtor PAI
      cout << "Box width " << Box::width << endl;
    }

};

class Circle {
   protected:
      int width = 10;
      int height = 10;
};

class SmallBox: protected Rectangle, private Circle  { // HERANCA MULTIPLA
   public:
      int getWidth() {
        return Box::width;
      }
      int getHeight() {
        return Rectangle::height;
      }
      int getArea() {
        return Circle::width * Circle::height;
      }

};

int main() {

  SmallBox sb;
  cout << "SmallBox width " << sb.getWidth() << endl;
  cout << "SmallBox height " << sb.getHeight() << endl;
  cout << "SmallBox area " << sb.getArea() << endl;

  system("pause");
  return 0;

}
