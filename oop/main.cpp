#include <iostream>
#include "robot.hpp"

using namespace std;

/*class Robot {
public:
    Robot(string name, int version_number)
        : name(name), version_number(version_number),   // first name - private attribute name | second name - argumant name | USE THIS INSTEAD OF "this->"
        internal_temperature(30.0) 
    {
        // Another way of declaring variables
        // this->name = name; // first name - private attribute name | second name - argumant name
        // this->version_number = version_number;
        // this->internal_temperature = 30.0; // May or may not be used
    }

    void say_hi()
    {
        cout << "Hello, my name is " << name << ", ready to help!" << endl;
    }

    void init_hardware()
    {
        cout << "Init hardware" << endl;
    }

    void print_info()
    {
        say_hi();
        cout << "Version number: " << version_number << endl;
        cout << "Temperature: " << internal_temperature << endl;
    }
private:
    string name;
    int version_number;
    double internal_temperature;
}; */

int main()
{
    Robot robot1("R2D2", 3);
    Robot robot2("C3P0", 1);

    robot1.print_info();
    robot2.print_info();

    RoboticArm arm("Bob", 4, 300);
    arm.print_info();
    arm.pick_object(1, 2);
    arm.place_object(3, 4);


    return 0;
}