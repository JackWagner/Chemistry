#include <iostream>
#include <string>

using namespace std;

class coordinates : public objCounter {
  
  short unsigned int X;
  short unsigned int Y;
  short unsigned int Z;
  
 public:
  coordinates(short unsigned int, short unsigned int, short unsigned int);
  short unsigned int x();
  short unsigned int y();
  short unsigned int z();


};

class system {
  short unsigned int x_Axis;
  short unsigned int y_Axis;
  short unsigned int z_Axis;

 public:
  system(short unsigned int, short unsigned int, short unsigned int);
  short unsigned int xAxis();
  short unsigned int yAxis();
  short unsigned int zAxis();

};

class objCounter {
  
  protected:
    static unsigned long long int totalMolecules;
  
  public:
    objCounter();
    unsigned long long int total();
  
}
