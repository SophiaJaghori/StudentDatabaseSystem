// -------------------------------------------------------------
// File Name     : robotoicDepartment.h
// Class         : CIS 554-M401 Object Oriented Programming in c++
// University    : Syracuse University 
// Student Name  : Hameeda Jaghori
// Project Title : Student Management Portal with fee calculator
// -------------------------------------------------------------



#include <iostream>
#include <string>
#include "student.h"

class roboticsDepartment : public student
{
public:
    roboticsDepartment();
    roboticsDepartment(string student_name, string student_mobile_number, string studentDepartment, int student_credits, double student_gpa, string student_status)
        : student(student_name, student_mobile_number, studentDepartment, student_credits, student_gpa, student_status)
    {
    }

    // Get list of robots for students to learn
    void getListofRobots();

private:
    const char *robotsList[3] = {"Kuka Robot", "Mitsubishi Robot", "Yaskawa"};
};