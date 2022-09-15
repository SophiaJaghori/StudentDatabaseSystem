// -------------------------------------------------------------
// File Name     : roboticsDepartment.cpp
// Topic         : OOP in c++
// Student Name  : Hameeda Jaghori
// Project Title : Student Management Portal with fee calculator
// -------------------------------------------------------------

#include "roboticsDepartment.h"

void roboticsDepartment::getListofRobots()
{
    cout
        << "--------------------------------------------------------" << endl
        << "*      List of Robots in Department for Student         *" << endl
        << "--------------------------------------------------------" << endl;

    for (int i = 0; i < sizeof(robotsList) / sizeof(robotsList[0]); i++)
    {
        cout << to_string(i + 1) + " " + robotsList[i] << endl;
    }
}