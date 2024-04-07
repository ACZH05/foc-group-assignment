#include <iostream>
#include <iomanip>
using namespace std;

class courseInfo
{
public:
    string courseName;
    int courseCode;
    double courseFee;
    courseInfo(string x, int y, double z)
    {
        courseName = x;
        courseCode = y;
        courseFee = z;
    }
};

void createTable(courseInfo courseList[]);

int main()
{
    courseInfo autoCAD("1-AutoCAD Basic", 1, 1470);                    // create an object for autoCAD Basic
    courseInfo msExcelBasic("2-Microsoft Excel Basic", 2, 525);        // create an object for Microsoft Excel Basic
    courseInfo msProject("3-Microsoft Project", 3, 1570);              // create an object for Microsoft Project
    courseInfo eInvoice("4-E-Invoice Strategic Implementing", 4, 850); // create an object for Invoice Strategic Implementing
    courseInfo analyzingData("5-Analyzing Data", 5, 1890);             // create an object for Analyzing Data

    courseInfo courseList[5] = {autoCAD, msExcelBasic, msProject, eInvoice, analyzingData};

    createTable(courseList);
    return 0;
}

void createTable(courseInfo courseList[])
{
    cout << "| " << setw(40) << left << "Course"
         << "| " << setw(20) << left << "Course code"
         << "| Fee " << setw(18) << left << "(RM)"
         << "|\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "| " << setw(40) << left << courseList[i].courseName << "| " << setw(20) << left << courseList[i].courseCode << "| RM" << setw(20) << left << courseList[i].courseFee
             << "|\n";
    }
}