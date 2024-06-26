#include "MobileRobot.h"

extern ofstream myFile; // for filewrite

/*TODO: write your code of the MobileRobot constructor*/ // DONE ?
MobileRobot::MobileRobot(string model1, string model) : Robot(model1) {
    model = model;

}


void MobileRobot::print(void) {
    /*TODO: write your code to call the print function of the Robot class*/ // DONE
    Robot::print();
    myFile << "--------------------------------------" << endl;
    myFile << "Mobile Robot State" << endl;
    myFile << "--------------------------------------" << endl;
    myFile << "Linear Velocity: " << getVel() <<  " m/s" << endl;
    myFile << "Rotational Velocity: "  << getRotVel()	<< " rad/s" << endl;
    myFile << "Vx: "  << getVx() << " m/s" << endl;
    myFile << "Vy: "  << getVy() << " m/s" << endl;

    myFile << "--------------------------------------" << endl;
    myFile << "Wheel States" << endl;
    myFile << "--------------------------------------" << endl;

    /*TODO: write your code to print information about the added wheels
     *      your should call the print function of the object pointed to by the shared pointer in wheels
     */
    //set<int>::iterator iter = myset.find(100);
    //if (iter != myset.end())
    //{
    //    int setint = *iter;

    //} set<int>:: iterator it;
    // for( it = s.begin(); it!=s.end(); ++it){
    //    int ans = *it;
    //    cout << ans << endl;
    // }
    set<shared_ptr<Wheel>>::iterator iter;
    for(iter = wheels.begin(); iter!=wheels.end(); ++iter){
        (*iter)->print();
    }
}

void MobileRobot::addWheel(shared_ptr<Wheel> wheel) {
    /*TODO: write your code*/ // DONE ?
    // auto TempNode = root;
    wheels.insert(wheel);

}
