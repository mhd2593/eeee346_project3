#include "MobileRobot.h"

extern ofstream myFile; // for filewrite

/*TODO: write your code of the MobileRobot constructor*/

void MobileRobot::print(void) {
  /*TODO: write your code to call the print function of the Robot class*/

  myFile << "--------------------------------------" << endl;
  myFile << "Mobile Robot State" << endl;
  myFile << "--------------------------------------" << endl;
  myFile << "Linear Velocity: " << getVel() <<  " m/s" << endl;
  myFile << "Rotational Velocity: "  << getRotVel()	<< " rad/s" << endl;
  myFile << "Vx: "  << getVx() << " m/s" << endl;
  myFile << "Vy: "  << getVy() << " m/s" << endl;

  myFile << "--------------------------------------" << endl;
  myFile << "Wheel States" << endl;
  myFile << "--------------------------------------" << endl;

  /*TODO: write your code to print information about the added wheels
   *      your should call the print function of the object pointed to by the shared pointer in wheels
   */
}

void MobileRobot::addWheel(shared_ptr<Wheel> wheel) {
  /*TODO: write your code*/
}
