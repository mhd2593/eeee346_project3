#include "OmnidirectionalDriveRobot.h"
#include <math.h>

const string OmnidirectionalDriveRobot::MODEL_NAME = "Omnidirectional Drive";

/*TODO: write your code of the DifferentialDriveRobot constructor*/

double OmnidirectionalDriveRobot::getVel() {
  /*TODO: write your code*/
}

double OmnidirectionalDriveRobot::getVx() {
  /*TODO: write your code*/
}

double OmnidirectionalDriveRobot::getVy() {
  /*TODO: write your code*/
}

double OmnidirectionalDriveRobot::getRotVel() {
  /*TODO: write your code*/
}

void OmnidirectionalDriveRobot::setFrontRightWheelVelocity(double vel) {
  /*TODO: write your code*/
}

void OmnidirectionalDriveRobot::setFrontLeftWheelVelocity(double vel) {
  /*TODO: write your code*/
}

void OmnidirectionalDriveRobot::setBackRightWheelVelocity(double vel) {
  /*TODO: write your code*/
}

void OmnidirectionalDriveRobot::setBackLeftWheelVelocity(double vel) {
  /*TODO: write your code*/
}

void OmnidirectionalDriveRobot::print() {
  MobileRobot::print();
  myFile << "--------------------------------------" << endl;
  myFile << MODEL_NAME << " Robot State" << endl;
  myFile << "--------------------------------------" << endl;
  myFile << "Wheel Radius: " << wheelRadius << endl;
  myFile << "Wheel Distance Left-Right: " << wheelDistanceLR << endl;
  myFile << "Wheel Distance Front-Back: " << wheelDistanceFB << endl;
  myFile << "--------------------------------------" << endl;
}

