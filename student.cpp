// -------------------------------------------------------------
// File Name     : student.cpp
// Class         : CIS 554-M401 Object Oriented Programming in c++
// University    : Syracuse University 
// Student Name  : Hameeda Jaghori
// Project Title : Student Management Portal with fee calculator
// -------------------------------------------------------------

#include "student.h"

student::student()
{
    student_credits = 0;
    student_gpa = 0.00;
}

// Student constructor with required params
student::student(string name, string number, string department, int credits, double gpa, string status)
{
    student_name = name;
    student_mobile_number = number;
    studentDepartment = department;
    student_credits = credits;
    student_gpa = gpa;
    student_status = status;
}

// Set Student Data
void student::setStudentDetails()
{
    cout << "Enter Student name : ";
    cin >> student_name;
    cout << "Enter Student Mobile Number : ";
    cin >> student_mobile_number;
    studentDepartment = "Computer Science";
    cout << "Enter Student Credits : ";
    cin >> student_credits;
    cout << "Enter Student GPA : ";
    cin >> student_gpa;
    setStudentStatus();
}

void student::setStudentStatus()
{
    cout << "Select your Status " << endl;
    cout << "1) Wa-resident " << endl;
    cout << "2) Non-resident-intl " << endl;
    cout << "3) Non-WA-resident-eLearning " << endl;
    cout << "4) BAS-resident " << endl;
    cout << "5) BAS-Non-resident-intl " << endl;
    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
        student_status = "Wa-resident";
        break;
    case 2:
        student_status = "Non-resident-intl";
        break;
    case 3:
        student_status = "Non-WA-resident-eLearning";
        break;
    case 4:
        student_status = "BAS-resident";
        break;
    case 5:
        student_status = "BAS-Non-resident-intl";
        break;

    default:
        student_status = "Wa-resident";
        break;
    }
}

// Get all student details
void student::getStudentDetails()
{
    cout << "-------------------------------------------------------------------------------------------------------------------" << endl
         << setw(10) << "Name : " << student_name << setw(15) << "   "
         << "Mobile Number : " << student_mobile_number << endl
         << setw(10) << "Department : " << studentDepartment << setw(15) << "   "
         << "Student Credits : " << student_credits << endl
         << setw(10) << "GPA : " << student_gpa << setw(15) << "   "
         << "Student Fee : USD " << getStudentsCollegeFee() << "(Calculated based on credits,status)" << endl
         << setw(10) << "Student Status : " << student_status << endl;
}

// Get student status
string student::getStudentStatus()
{
    return student_status;
}

// Get Student credits score
int student::getStudentsCredits()
{
    return student_credits;
}

// get student Name
string student::getStudentName()
{
    return student_name;
}

// Get student GPA score
double student::getStudentGPA()
{
    return student_gpa;
}

// Get Number of Credits taken
int student::getNumCredits()
{
    return student_credits;
}

// Get Student Mobile Number
string student::getMobileNumber()
{
    return student_mobile_number;
}

// Get student department
string student::getStudentDepartment()
{
    return studentDepartment;
}

// Calculate and get student College Fee
double student::getStudentsCollegeFee() //based on North Seattle college website fees 
{

    if (getStudentStatus().compare("Wa-resident"))// if the student is washington residents
    {
        if (getNumCredits() > 0 && getNumCredits() <= 10) // based on how many credits the student takes per quarter.
        {
            tution_fee = getNumCredits() * 113.04; // fees per credit is $113.04
        }
        else if (getNumCredits() > 10 && getNumCredits() <= 19) // it is checking whether the student is geteing greater than 10 cr or less
        {
            tution_fee = 1130.4 + ((getNumCredits() - 10) * 55.94);
        }
        else if (getNumCredits() > 19 && getNumCredits() <= 25)
        {
            tution_fee = 1679.34 + ((getNumCredits() - 19) * 101.41);
        }
        else
        {
            tution_fee = 0.0;
        }
    }
    else if (getStudentStatus().compare("Non-resident-intl")) // checks to see if the student is not a Washington state resident
    {
        if (getNumCredits() > 0 && getNumCredits() <= 10)
        {
            tution_fee = getNumCredits() * 291.28;
        }
        else if (getNumCredits() > 10 && getNumCredits() < 19)
        {
            tution_fee = 2912.80 + ((getNumCredits() - 10) * 63.22);
        }
        else if (getNumCredits() > 18 && getNumCredits() <= 25)
        {
            tution_fee = 3418.56 + ((getNumCredits() - 18) * 279.66);
        }
        else
        {
            tution_fee = 0.0;
        }
    }
    else if (getStudentStatus().compare("Non-WA-resident-eLearning")) // checks to see if the student is an online learning 
    {
        if (getNumCredits() > 0 && getNumCredits() <= 10)
        {
            tution_fee = getNumCredits() * 220.51;
        }
        else if (getNumCredits() > 10 && getNumCredits() < 19)
        {
            tution_fee = 2205.10 + ((getNumCredits() - 10) * 11.04);
        }
        else if (getNumCredits() > 18 && getNumCredits() <= 25)
        {
            tution_fee = 2293.42 + ((getNumCredits() - 18) * 208.89);
        }
        else
        {
            tution_fee = 0.0;
        }
    }
    else if (getStudentStatus().compare("BAS-resident")) 
    {
        if (getNumCredits() > 0 && getNumCredits() <= 10)
        {
            tution_fee = getNumCredits() * 235.47;
        }
        else if (getNumCredits() > 10 && getNumCredits() < 19)
        {
            tution_fee = 2354.70 + ((getNumCredits() - 10) * 11.84);
        }
        else if (getNumCredits() > 18 && getNumCredits() <= 25)
        {
            tution_fee = 2449.42 + ((getNumCredits() - 18) * 208.89);
        }
        else
        {
            tution_fee = 0.0;
        }
    }
    else if (getStudentStatus().compare("BAS-Non-resident-intl"))
    {
        if (getNumCredits() > 0 && getNumCredits() <= 10)
        {
            tution_fee = getNumCredits() * 620.30;
        }
        else if (getNumCredits() > 10 && getNumCredits() < 19)
        {
            tution_fee = 6203.00 + ((getNumCredits() - 10) * 11.84);
        }
        else if (getNumCredits() > 18 && getNumCredits() <= 25)
        {
            tution_fee = 6297.72 + ((getNumCredits() - 18) * 608.68);
        }
        else
        {
            tution_fee = 0.0;
        }
    }

    else
    {
        tution_fee = 0.0;
    }

    return tution_fee;
}
