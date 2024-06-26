#include "DifferentialDriveRobot.h"
#include <cmath>

const string DifferentialDriveRobot::MODEL_NAME = "DifferentialDrive";

/*TODO: write your code of the DifferentialDriveRobot constructor*/ // DONE
DifferentialDriveRobot::DifferentialDriveRobot(string model, double r, double d) : MobileRobot(model, model) {
    wheelRadius = r;
    wheelDistance = d;
     //auto node = make_shared<Node<T>>(data); // create a new node with the entered data
    //auto PrevNode = make_shared<Node<T>>(NULL); // you need to put not a pointer but a variable OR create a shared pointer using shared_ptr
    //auto TempNode = root; //fails here
    //
    leftWheel = make_shared<Wheel>("Left", r, 0.0, r/2);
    rightWheel = make_shared<Wheel>("Right", r, 0.0, -r/2);
    this->addWheel(leftWheel);
    this->addWheel(rightWheel);


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
    double r = wheelRadius;
    double v = (M_PI*r)*(leftWv + rightWv);
    return v;

}

double DifferentialDriveRobot::getVx() {
    /*TODO: write your code*/ // DONE
    double  v = getVel();
    return v*cos(getRotVel());

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
    double r = wheelRadius;
    double d = wheelDistance; // CHECK
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
