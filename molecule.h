#include <iostream>
#include <string>
#include "system.h"
using namespace std;
class molecule : public coordinates {
  string speciesname;
 public:
 molecule(string, short unsigned int, short unsigned int,
	  short unsigned int);
  string name();
  short int velocityX();
  short int velocityY();
  short int velocityZ();
  void toString();
};




//either position is given as a variable (less memory allocation) or 
//it is returned as a function of time (more processing)
