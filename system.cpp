#include <iostream>
#include "system.h"
using namespace std;


coordinates::coordinates(short unsigned int x, short unsigned int y, 
			 short unsigned int z) {
  X = x;
  Y = y;
  Z = z;
}

short unsigned int coordinates::x() {
  return X;
} 

short unsigned int coordinates::y() {
  return Y;
}

short unsigned int coordinates::z() {
  return Z;
}

int main() {

  coordinates E(100,150,200);
  cout << "x: " << E.x() << "\n";
  cout << "y: " << E.y() << "\n";
  cout << "z: " << E.z() << "\n";

  return 0;
}
