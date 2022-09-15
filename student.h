// -------------------------------------------------------------
// File Name     : student.h
// Class         : CIS 554-M401 Object Oriented Programming in c++
// University    : Syracuse University 
// Student Name  : Hameeda Jaghori
// Project Title : Student Management Portal with fee calculator
// -------------------------------------------------------------

#ifndef _student_h_
#define _student_h_

#include <iostream>
#include <string>
#include <conio.h>
#include <iomanip>
#include <limits>

using namespace std;
using std::cin;
using std::cout;
using std::endl;
using std::left;
using std::right;
using std::setw;
using std::string;
class student
{

public:
    // Student constructor with all params
    student();
    student(string name, string number, string department, int credits, double gpa, string status);

    string getStudentStatus();
    string getStudentName();
    string getMobileNumber();
    string getStudentDepartment();
    int getStudentsCredits();
    int getNumCredits();
    double getStudentGPA();
    double getStudentsCollegeFee();
    void getStudentDetails();
    void removeStudent();
    void setStudentDetails();
    void setStudentStatus();

private:
    string student_name;
    string student_mobile_number;
    string studentDepartment;
    string student_status;
    int student_credits;
    double student_gpa;
    double tution_fee;
};
#endif
