// -------------------------------------------------------------
// File Name     : student.cpp
// Class         : CIS 554-M401 Object Oriented Programming in c++
// University    : Syracuse University 
// Student Name  : Hameeda Jaghori
// Project Title : Student Management Portal with fee calculator
// I have created a database system for the north seattle college students
// -------------------------------------------------------------

#include "main.h"
int computerScienceDepartment::teachersCount = 20; // setting teachers count for computer science department

int main()
{
    // Adding some date during initialization
    computerScienceDepartment csStudentData("Sophia Jagori", "6235458575", "Computer Science", 5, 3.5, "Wa-resident");
    roboticsDepartment roboticsStudentData("John Smith", "85451257856", "Robotics Department", 4, 3.9, "Non-WA-resident-eLearning");

    // inserting data into vector
    studentDetails[0] = &csStudentData;
    studentDetails.push_back(&roboticsStudentData);

    // Get Options Available in the system
    getInformation();

    // Logic Execute according to the User option
    while (selectedOption != 7)
    {
        switch (selectedOption)
        {

        case 1: // Get All Student List
        {
            // input flag = 1 Get all student List
            getStudentList(1);
            break;
        }
        case 2: // Add new student
        {
            cout << "Departments Available in University" << endl
                 << "(1) Computer Science Department" << endl
                 << "(2) Robotics Department" << endl
                 << "Select Department : " << endl;
            int department;
            cin >> department;

            insertStudent(department);
            // input flag = 1 Get all student List
            getStudentList(1); // Get Updated Student List after inserting new student

            break;
        }
        case 3: // update student record
        {
            updateStudent();
            // input flag = 1 Get all student List
            getStudentList(1); // Get Updated Student List after updating student Data

            break;
        }
        case 4: // Get department data
        {
            // list of all depaprtments
            // update particular departemtn data
            getDepartmentList();

            cout << "Select Department to update department related data : ";

            int departmentChoice;
            cin >> departmentChoice;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            switch (departmentChoice)
            {
            case 1: // Computer Science
            {
                cout << "No. of Teachers in Computer Science Department : "
                     << computerScienceDepartment::teachersCount << endl;
                cout << "-------------------------------------------------" << endl
                     << "*    Computer Science Department Subject        *" << endl;
                csStudentData.getSubjectsList();
                break;
            }

            case 2: // Robotics Department
            {
                roboticsStudentData.getListofRobots();
                break;
            }
            default:
                break;
            }

            break;
        }
        case 5: // Remove Student form College
        {
            removeStudent();
            cout << "Below is the updated list" << endl;
            // input flag = 1 Get all student List
            getStudentList(1); // // Get Updated Student List after removing student Data
            break;
        }
        case 6: // Get students having GPA more then 3.7
        {
            getStudentList(2);
            break;
        }

        default: // Executes when the userinput not handled
            cout << "Your Input is Wrong! Please try again." << endl;
        }

        // Get Options Available in the system
        getInformation();
    }
    cout << "Thank you Have a Nice Day" << endl;
}

// Get All student from all department
void getStudentList(int flag)
{
    // flag 1 - list of all students
    // flag 2 - students eleigible for scholarship

    cout << "There are totally (" << studentDetails.size() << ") Students in our system." << endl;
    for (auto studetail : studentDetails)
    {
        if (flag == 2)
        {
            if (studetail->getStudentGPA() > 3.7)
            {
                cout<<"You are eligible for the placement ! Congratulations!"<< endl;
            }
        }
        else
        {
            studetail->getStudentDetails();
        }
    }
}

// Get All functionalities
void getInformation()
{
    // Listing Out Student Portal Functionalities:
    cout << "------------------------------------------" << endl
         << "* Welcome to the North Seattle College *" << endl
         << "------------------------------------------" << endl
         << "Select Options From below Menu Here" << endl
         << "(1) Get All Student List" << endl
         << "(2) Add Student to College" << endl
         << "(3) Update Student List" << endl
         << "(4) Get Department Data" << endl
         << "(5) Remove Student Record" << endl
         << "(6) Students Eligible for Placement" << endl
         << "(7) Exit!" << endl;

    // getting user input
    cout << "Waiting for your Input : ";
    cin >> selectedOption;
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}