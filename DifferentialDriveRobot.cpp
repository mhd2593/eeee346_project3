#include "DifferentialDriveRobot.h"
#include <cmath>

const string DifferentialDriveRobot::MODEL_NAME = "DifferentialDrive";

/*TODO: write your code of the DifferentialDriveRobot constructor*/

void DifferentialDriveRobot::setLeftWheelVelocity(double v) {
  /*TODO: write your code*/
}

void DifferentialDriveRobot::setRightWheelVelocity(double v) {
  /*TODO: write your code*/
}

double DifferentialDriveRobot::getVel() {
  /*TODO: write your code*/
}

double DifferentialDriveRobot::getVx() {
  /*TODO: write your code*/
}

double DifferentialDriveRobot::getVy() {
  /*TODO: write your code*/
}

double DifferentialDriveRobot::getRotVel() {
  /*TODO: write your code*/
}

void DifferentialDriveRobot::print() {
  MobileRobot::print();
  myFile << "--------------------------------------" << endl;
  myFile << MODEL_NAME << " Robot State" << endl;
  myFile << "--------------------------------------" << endl;
  myFile << "Wheel Radius: " << wheelRadius << endl;
  myFile << "Wheel Distance Left-Right: " << wheelDistance << endl;
  myFile << "--------------------------------------" << endl;
}
