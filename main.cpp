#include "DifferentialDriveRobot.h"
#include "MobileRobot.h"
#include "OmnidirectionalDriveRobot.h"
#include "Robot.h"
#include "Wheel.h"

using namespace std;

const int ROBOT_TYPE_DIFF = 1;
const int ROBOT_TYPE_OMNI = 2;

ofstream myFile; // for filewrite

int main(void) {
  int type;
  double radius;
  double wheelDist;
  double lVel, rVel;
  double lrDist, fbDist;
  double flVel, frVel, blVel, brVel;
  
  myFile.open("result.txt"); // for filewrite

  /*TODO: create a MobileRobot-typed object pointer named robot*/
    //
    //    MobileRobot bot(); // CHECK
    //    Robot *robot;
    MobileRobot* robot;



  cin >> type;

  switch (type) {
    case ROBOT_TYPE_DIFF: 
      {
        // receive the values of wheel radius and distances
        cin >> radius >> wheelDist;

        /*TODO: make the object pointer robot point to a new object of DifferentialDriveRobot*/
        //DifferentialDriveRobot diffRobot =  DifferentialDriveRobot("2",2,2);
       // diffRobot = DifferentialDriveRobot();
       // DifferentialDriveRobot
       robot = new DifferentialDriveRobot(radius, wheelDist);



        // receive the values of wheel velocities
        cin >> lVel >> rVel;

        /*TODO: downcast the pointer type of robot to DifferentialDriveRobot 
         *      and assign the result to a DifferentialDriveRobot-typed object pointer named diff*/ 
        DifferentialDriveRobot* diff = dynamic_cast<DifferentialDriveRobot*>(robot);
        // set the wheel velocities
        if (diff) {
          diff->setLeftWheelVelocity(lVel);
          diff->setRightWheelVelocity(rVel);
        } else {
          cout << "Bad Diff Robot, check config" << endl;
        }

        // print information
        robot->print();
        break;
      }
    case ROBOT_TYPE_OMNI:
      {
        // receive the values of wheel radius and distances
        cin >> radius >> lrDist >> fbDist;

        /*TODO: make the object pointer robot point to a new object of OmnidirectionalDriveRobot*/
        robot = new OmnidirectionalDriveRobot(radius, lrDist, fbDist);
        // receive the values of wheel velocities
        cin >> flVel >> frVel >> blVel >> brVel;

        /*TODO: downcast the pointer type of robot to OmnidirectionalDriveRobot
         *      and assign the result to an OmnidirectionalDriveRobot-typed object pointer named omni*/ 
        OmnidirectionalDriveRobot* omni = dynamic_cast<OmnidirectionalDriveRobot*>(robot);
        // set the wheel velocities
        if (omni) {
          omni->setFrontLeftWheelVelocity(flVel);
          omni->setFrontRightWheelVelocity(frVel);
          omni->setBackLeftWheelVelocity(blVel);
          omni->setBackRightWheelVelocity(brVel);
        } else {
          cout << "Bad Omni Robot, check config" << endl;
        }

        // print information
        robot->print();
        break;
      }
    default:
      cout << "Incorrect robot type" << endl;
      break;
  }

  delete robot; // deallocate dynamic memory allocated to the object

  return 0;
}
