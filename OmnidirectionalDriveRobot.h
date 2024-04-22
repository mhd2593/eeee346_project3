#ifndef OMNIDIRECTIONAL_DRIVE_ROBOT_H__
#define OMNIDIRECTIONAL_DRIVE_ROBOT_H__

#include "MobileRobot.h"

class OmnidirectionalDriveRobot : public MobileRobot {
    OmnidirectionalDriveRobot(string model1, string model, double r, double d, double e);

    static const string MODEL_NAME;
  shared_ptr<Wheel> frontLeftWheel;
  shared_ptr<Wheel> frontRightWheel;
  shared_ptr<Wheel> backLeftWheel;
  shared_ptr<Wheel> backRightWheel;
  double wheelRadius;
  double wheelDistanceLR;
  double wheelDistanceFB;

public: 
  /*
   * OmnidirectionalDriveRobot constructor
   * @param r - radius of the wheels
   * @param d - distance between left and right wheels
   * @param e - distance between front and back wheels
   */
  OmnidirectionalDriveRobot(double r, double d, double e);

  /*
   * @see MobileRobot
   */
  double getVel() override;

  /*
   * @see MobileRobot
   */
  double getVx() override;

  /*
   * @see MobileRobot
   */
  double getVy() override;

  /*
   * @see MobileRobot
   */
  double getRotVel() override;

  /*
   * print the Omnidirectional Robot state
   */
  void print() override;

  /*
   * set velocity for front left wheel
   * @param vel - velocity of the front left wheel
   */
  void setFrontLeftWheelVelocity(double vel);

  /*
   * set velocity for front right wheel
   * @param vel - velocity of the front right wheel
   */
  void setFrontRightWheelVelocity(double vel);

  /*
   * set velocity for back left wheel
   * @param vel - velocity of the back left wheel
   */
  void setBackLeftWheelVelocity(double vel);

  /*
   * set velocity for back right wheel
   * @param vel - velocity of the back right wheel
   */
  void setBackRightWheelVelocity(double vel);
};
#endif
