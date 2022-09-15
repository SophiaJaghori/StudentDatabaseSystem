// -------------------------------------------------------------
// File Name     : student.h
// Class         : CIS 554-M401 Object Oriented Programming in c++
// University    : Syracuse University 
// Student Name  : Hameeda Jaghori
// Project Title : Student Management Portal with fee calculator
// -------------------------------------------------------------


#include <iostream>
#include "student.h"
#include "computerScienceDepartment.h"
#include "roboticsDepartment.h"
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using namespace std;

vector<student *> studentDetails(1);

const char *departmentList[1] = {"Computer Science"};
int selectedOption;

// Declaration for getStudentList Function
void getStudentList(int flag);

// Declaration for user's Option 
void getInformation();

// Function to insert student
void insertStudent(int studentDepartment)
{
    switch (studentDepartment)
    {
    case 1:
        studentDetails.push_back(new computerScienceDepartment());
        studentDetails[studentDetails.size() - 1]->setStudentDetails();
        break;

    default:
        cout << "Select Correct Department from List";
        break;
    }
}

// Update student record data
void updateStudent()
{
    int index = 0;
    int userSelectedInput;

    cout << "Select the student Number you want to remove" << endl;

    for (auto studetail : studentDetails)
    {
        index++;
        cout << "(" << index << ")" << std::setw(50) << std::left << studetail->getStudentName() << " Student Department : " << studetail->getStudentDepartment() << endl;
    }
    cin >> userSelectedInput;

    if (userSelectedInput > 0 && userSelectedInput <= index)
    {
        studentDetails[userSelectedInput - 1]->setStudentDetails();
    }
}

// Method to remove student
void removeStudent()
{
    int index = 0;
    int userSelectedInput;

    cout << "Select the student Number you want to remove" << endl;

    for (auto studetail : studentDetails)
    {
        index++;
        cout << "(" << index << ")" << std::setw(50) << std::left << studetail->getStudentName() << " Student Department : " << studetail->getStudentDepartment() << endl;
    }
    cin >> userSelectedInput;

    // Erase the Student Data based on the user Input
    if (userSelectedInput > 0 && userSelectedInput <= index)
    {
        studentDetails.erase(studentDetails.begin() + userSelectedInput - 1);
    }
}

// Printing elements from the departmentList array
void getDepartmentList()
{
    cout
        << "-----------------------------------------------" << endl
        << "*             List of Departments             *" << endl
        << "-----------------------------------------------" << endl;

    for (int i = 0; i < sizeof(departmentList) / sizeof(departmentList[0]); i++)
    {
        cout << to_string(i + 1) + " " + departmentList[i] << endl;
    }
}
