#include "Wheel.h"

/*TODO: write your code of the Wheel constructor*/

void Wheel::print(void) {
  myFile << "Name: " << name << endl;
  myFile << "Position: (" << x << " m, "  << y << " m)" << endl;
  myFile << "Velocity: " << velocity << " rev/s" << endl;
  myFile << "--------------------------------------" << endl;
}
