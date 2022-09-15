// -------------------------------------------------------------
// File Name     : computerScienceDepartment.cpp
// Topic         : OOP in c++
// Student Name  : Sophia Jaghori
// Project Title : Student Management Portal with fee calculator
// -------------------------------------------------------------

#include "computerScienceDepartment.h"

computerScienceDepartment::computerScienceDepartment() : student()
{
}

// Get list of all subjects in Computer Science Department
void computerScienceDepartment::getSubjectsList()
{
    cout
        << "--------------------------------------------------------" << endl
        << "*  List of Subjects in Computer Science Department     *" << endl
        << "--------------------------------------------------------" << endl;

    for (int i = 0; i < sizeof(subjectList) / sizeof(subjectList[0]); i++)
    {
        cout << to_string(i + 1) + " " + subjectList[i] << endl;
    }
}
