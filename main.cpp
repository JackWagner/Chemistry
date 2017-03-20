#include <iostream>
#include "molecule.h"
using namespace std;

int main() {
  molecule oxygen("O2", 25,30,40);
  oxygen.toString();

  return 0;
}

