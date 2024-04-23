#include "OmnidirectionalDriveRobot.h"
#include <math.h>

const string OmnidirectionalDriveRobot::MODEL_NAME = "Omnidirectional Drive";

/*TODO: write your code of the DifferentialDriveRobot constructor*/ // DONE Check
OmnidirectionalDriveRobot ::OmnidirectionalDriveRobot(string model1, string model, double r, double d, double e)
        : MobileRobot(model1, model) {
    wheelRadius = r;
    wheelDistanceLR = d;
    wheelDistanceFB = e;
    frontLeftWheel = make_shared<Wheel>("Front Left", r, r/2, r/2);
    frontRightWheel = make_shared<Wheel>("Front Right", r, r/2, -r/2);
    backLeftWheel = make_shared<Wheel>("Back Left", r, -r/2, r/2);
    backRightWheel = make_shared<Wheel>("Back Right", r, -r/2, -r/2);

    this->addWheel(frontRightWheel);
    this->addWheel(frontLeftWheel);
    this->addWheel(backLeftWheel);
    this->addWheel(backRightWheel);
}
double OmnidirectionalDriveRobot::getVel() {
    /*TODO: write your code*/ //DONE check
    double VxSquared = pow(getVx(),2);
    double VySquared = pow(getVy(), 2);
    double vmag = sqrt((VxSquared+VySquared));
    double gamma = atan2(getVx(), -getVy());
    if(( gamma > M_PI && gamma < 2*M_PI) || (gamma < 0 && gamma > -M_PI)){
        return (-1.0)*vmag;
    }
    return vmag;
}

double OmnidirectionalDriveRobot::getVx() {
    /*TODO: write your code*/ // DONE
    double fl = frontLeftWheel->getVelocity();
    double fr =  frontRightWheel->getVelocity();
    double bl =  backLeftWheel->getVelocity();
    double br = backRightWheel->getVelocity();
    double r = wheelRadius;
    return ((M_PI*r)/2)*(fl+fr+bl+br);

}

double OmnidirectionalDriveRobot::getVy() {
    /*TODO: write your code*/ // DONE
    double fl = frontLeftWheel->getVelocity();
    double fr =  frontRightWheel->getVelocity();
    double bl =  backLeftWheel->getVelocity();
    double br = backRightWheel->getVelocity();
    double r = wheelRadius;
    return ((M_PI*r)/2)*(-fl+fr+bl-br);
}

double OmnidirectionalDriveRobot::getRotVel() {
    /*TODO: write your code*/ // DONE
    double fl = frontLeftWheel->getVelocity();
    double fr =  frontRightWheel->getVelocity();
    double bl =  backLeftWheel->getVelocity();
    double br = backRightWheel->getVelocity();
    double e = wheelDistanceFB;
    double r = wheelRadius;
    double d  = wheelDistanceLR;
    double firtCoe = (M_PI*r)/(d+e);
    return firtCoe*(-fl+fr-bl+br);

}

void OmnidirectionalDriveRobot::setFrontRightWheelVelocity(double vel) {
    /*TODO: write your code*/ // DONE
    frontRightWheel->setVelocity(vel);
}

void OmnidirectionalDriveRobot::setFrontLeftWheelVelocity(double vel) {
    /*TODO: write your code*/ //DONE
    frontLeftWheel->setVelocity(vel);
}

void OmnidirectionalDriveRobot::setBackRightWheelVelocity(double vel) {
    /*TODO: write your code*/ //DONE
    backRightWheel->setVelocity(vel);
}

void OmnidirectionalDriveRobot::setBackLeftWheelVelocity(double vel) {
    /*TODO: write your code*/ //DONE
    backLeftWheel->setVelocity(vel);
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

