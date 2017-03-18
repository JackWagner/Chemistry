#include <iostream>
#include <string>

class molecule {
 public:
  string speciesname;
  short int velocityX;
  short int velocityY;
  short int velocityZ;
  short int posX;
  short int posY;
  short int posZ;
};

//either position is given as a variable (less memory allocation) or 
//it is returned as a function of time (more processing)
