#include "DifferentialDriveRobot.h"
#include <cmath>

const string DifferentialDriveRobot::MODEL_NAME = "DifferentialDrive";

/*TODO: write your code of the DifferentialDriveRobot constructor*/ // DONE
DifferentialDriveRobot::DifferentialDriveRobot(string model, double r, double d) : MobileRobot(std::string(), model) {
    wheelRadius = r;
    wheelDistance = d;

}
void DifferentialDriveRobot::setLeftWheelVelocity(double v) {
    /*TODO: write your code*/ // DONE
    leftWheel->setVelocity(v);

}

void DifferentialDriveRobot::setRightWheelVelocity(double v) {
    /*TODO: write your code*/ // DONE
    rightWheel->setVelocity(v);
}

double DifferentialDriveRobot::getVel() {
    /*TODO: write your code*/ // DONE ?
    double rightWv = rightWheel->getVelocity();
    double leftWv = leftWheel->getVelocity();
    double r = rightWheel->getRadius();
    double v = (M_PI*r)*(rightWv - leftWv);
    return v;

}

double DifferentialDriveRobot::getVx() {
    /*TODO: write your code*/ // DONE
    double  v = getVel();
    return v* cos(getRotVel());

}

double DifferentialDriveRobot::getVy() {
    /*TODO: write your code*/ // DONE
    double  v = getVel();
    return v* sin(getRotVel());
}

double DifferentialDriveRobot::getRotVel() {
    /*TODO: write your code*/ // DONE ?
    double rightWv = rightWheel->getVelocity();
    double leftWv = leftWheel->getVelocity();
    double r = rightWheel->getRadius();
    double d = rightWheel->getY() - leftWheel->getY(); // CHECK
    double w = ((2*M_PI*r)/d)*(rightWv - leftWv);
    return w;
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
