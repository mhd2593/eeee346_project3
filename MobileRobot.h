#ifndef MOBILE_ROBOT_H__
#define MOBILE_ROBOT_H__

#include "Robot.h"

class MobileRobot : public Robot {
protected:
    MobileRobot(string model1, string model);

/*
   * a set of wheels for the mobile robot
   * shared pointers pointing to objects of Wheel are stored in this set
   */
  set<shared_ptr<Wheel>> wheels;

public:
  /*
   * MobileRobot constructor (only declaration)
   * @param model - name of the model of Robot
   */
  MobileRobot(string model);

  /*
   * override in derived class based on configuration
   * @return linear velocity of Robot
   */
  virtual double getVel(void) = 0;

  /*
   * override in derived class based on configuration
   * @return linear velocity in x-axis
   */
  virtual double getVx(void) = 0;

  /*
   * override in derived class based on configuration
   * @return linear velocity in y-axis
   */
  virtual double getVy(void) = 0;

  /*
   * override in derived class based on configuration
   * @return rotational velocity
   */
  virtual double getRotVel(void) = 0;

  /*
   * print robot information known at the MobileRobot Level
   */
  virtual void print(void) = 0;

  /*
   * add a wheel to MobileRobot (the protected member set called wheels)
   * @param wheel - shared pointer pointing a wheel object
   */
  void addWheel(shared_ptr<Wheel> wheel);
};

#endif
