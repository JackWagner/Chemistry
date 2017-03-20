#include "molecule.h"
#include <iostream>
using namespace std;

molecule::molecule(string moleculename, short unsigned int x,
		   short unsigned int y, short unsigned int z)
  : coordinates(x,y,z)
{
  speciesname = moleculename; 
}

string molecule::name() {
  return speciesname;
}

short int molecule::velocityX() {
  return 0;
}

short int molecule::velocityY() {
  return 0;
}

short int molecule::velocityZ() {
  return 0;
}

void molecule::toString() {
  cout << "Name: " << molecule::name() << "\n";
  cout << "Velocity X: " << molecule::velocityX() << "\n";
  cout << "Velocity Y: " << molecule::velocityY() << "\n";
  cout << "Velocity Z: " << molecule::velocityZ() << "\n";
  cout << "Position X: " << coordinates::x() << "\n";
  cout << "Position Y: " << coordinates::y() << "\n";
  cout << "Position Z: " << coordinates::z() << "\n";
}
