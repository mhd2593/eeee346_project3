#ifndef WHEEL_H__
#define WHEEL_H__

#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

extern ofstream myFile; // for filewrite

class Wheel {
  string name;
  double radius;
  double velocity;
  double x;
  double y;

public:
  /*
   * Wheel constructor (only declaration)
   * @param name - name for the wheel position
   * @param r - radius of the wheel
   * @param x - position in the x-axis
   * @param y - poition in the y-axis
   */
  Wheel(string name, double r, double x, double y);

  /*
   * @return radius of the wheel
   */
  double getRadius() { /*TODO: write your code*/ };

  /*
   * @return velocity of the wheel
   */
  double getVelocity() { /*TODO: write your code*/ };

  /*
   * set wheel velocity
   * @param v - velocity of the wheel
   */
  void setVelocity(double v) { /*TODO: write your code*/ };

  /*
   * set the wheel radius
   * @param r - radius of the wheel
   */
  void setRadius(double r) { /*TODO: write your code*/ };

  /*
   * @return position of the wheel in x-axis
   */
  double getX() { /*TODO: write your code*/ }

  /*
   * @return position of the wheel in y-axis
   */
  double getY() { /*TODO: write your code*/ }

  /*
   * @return name of the wheel
   */
  string getName() { /*TODO: write your code*/ }

  /*
   * print the state of the wheel
   */
  void print() ;
};

#endif
