#include "Robot.h"

Robot::Robot(string model) : model(model) {}

void Robot::print() {
  myFile << "--------------------------------------" << endl;
  myFile << "Robot State" << endl;
  myFile << "--------------------------------------" << endl;
  myFile << "Model: " << model << endl;
  myFile << "--------------------------------------" << endl;
}
