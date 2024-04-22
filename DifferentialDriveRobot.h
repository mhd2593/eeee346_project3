#ifndef DIFFERENTIAL_DRIVE_ROBOT_H__
#define DIFFERENTIAL_DRIVE_ROBOT_H__

#include "Wheel.h"
#include "MobileRobot.h"

class DifferentialDriveRobot : public MobileRobot {

    shared_ptr<Wheel> leftWheel;
  shared_ptr<Wheel> rightWheel;
  double wheelRadius;
  double wheelDistance;
  static const string MODEL_NAME;

public:
  /*
   * DifferentialDriveRobot constructor
   * @param r - radius of the wheels
   * @param d - distance between the wheels
   */
  DifferentialDriveRobot(double r, double d);
    
  /*
   * set velocity of the right wheel
   * @param v - velocity of the right wheel
   */
  void setRightWheelVelocity(double v);

  /*
   * set velocity of the left wheel
   * @param v - velocity of the left wheel
   */
  void setLeftWheelVelocity(double v);

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
   * print the DifferentialDriveRobot state
   */
  void print() override;

    DifferentialDriveRobot(string model, double r, double d);
};

#endif
