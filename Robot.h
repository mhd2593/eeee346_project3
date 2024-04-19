#ifndef ROBOT_H__
#define ROBOT_H__

#include <vector>
#include <string>
#include <set>
#include <memory>
#include "Wheel.h"
#include <iostream>
#include <fstream> // for filewrite

using namespace std;

extern ofstream myFile; // for filewrite

class Robot {
protected:
  /*
   * model name of Robot
  */
  string model;
public:
  /*
   * Robot constructor
   * @param model - model name of Robot
   */
  Robot(string model);

  /*
   * print the Robot state
   */
  virtual void print() = 0; // pure virtual function
};

#endif
