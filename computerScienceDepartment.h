// -------------------------------------------------------------
// File Name     : computerScienceDepartment.h
// Topic         : OOP in c++
// Student Name  : Sophia Jaghori
// Project Title : Student Management Portal with fee calculator
// -------------------------------------------------------------

#include <iostream>
#include <string>
#include "student.h"

class computerScienceDepartment : public student
{

public:
    static int teachersCount; // No. of Teachers in Computer Science Department & we can modify this
    computerScienceDepartment();

    computerScienceDepartment(string student_name, string student_mobile_number, string studentDepartment, int student_credits, double student_gpa, string student_status)
        : student(student_name, student_mobile_number, studentDepartment, student_credits, student_gpa, student_status)
    {
    }

    void getSubjectsList();

private:
    const char *subjectList[5] = {"Data structure and algorithm", "OOP concept", "web development", "Networking", "Machine Learning"};
};