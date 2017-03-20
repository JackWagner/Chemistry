#include <iostream>
#include "system.h"
using namespace std;

objCounter::totalMolecules = 0;

objCounter::objCounter() {
	totalMolecules++;	
}


long long unsigned int objCounter::total() {
 return totalMolecules;
}

coordinates::coordinates(short unsigned int x, short unsigned int y, 
			 short unsigned int z) : objCounter() {
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


system::system(short unsigned int x, short unsigned int y, 
	       short unsigned int z) {
  x_Axis = x;
  y_Axis = y;
  z_Axis = z;
}

short unsigned int system::xAxis() {
  return x_Axis;
}

short unsigned int system::yAxis() {
  return y_Axis;
}

short unsigned int system::zAxis() {
  return z_Axis;
}

