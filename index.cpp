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
int calcFee(courseInfo courseList[], int courseCode, int noOfRegister);
int getDisc(int totalBeforeDisc, int noOfRegister);

int main()
{
    courseInfo autoCAD("AutoCAD Basic", 1, 1470);                    // create an object for autoCAD Basic
    courseInfo msExcelBasic("Microsoft Excel Basic", 2, 525);        // create an object for Microsoft Excel Basic
    courseInfo msProject("Microsoft Project", 3, 1570);              // create an object for Microsoft Project
    courseInfo eInvoice("E-Invoice Strategic Implementing", 4, 850); // create an object for Invoice Strategic Implementing
    courseInfo analyzingData("Analyzing Data", 5, 1890);             // create an object for Analyzing Data

    courseInfo courseList[5] = {autoCAD, msExcelBasic, msProject, eInvoice, analyzingData};

    int courseCodeInput, noOfRegister;
    double totalBeforeDisc, totalAfterDisc;

    createTable(courseList);

    cout << "Which course would you like to join (give course code only): ";
    cin >> courseCodeInput;
    cout << "How many are joining: ";
    cin >> noOfRegister;

    if (courseCodeInput < 1 || courseCodeInput > 5)
    {
        cout << "The course code you type doesn't exist, please try again!";
        return 0;
    }
    if (noOfRegister < 30)
    {
        cout << "There's not enough of people register, please try again!";
        return 0;
    }

    totalBeforeDisc = calcFee(courseList, courseCodeInput, noOfRegister);
    totalAfterDisc = getDisc(totalBeforeDisc, noOfRegister);

    cout << totalAfterDisc;

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

int calcFee(courseInfo courseList[], int courseCode, int noOfRegister)
{
    return courseList[courseCode - 1].courseFee * noOfRegister;
}

int getDisc(int totalBeforeDisc, int noOfRegister)
{
    if (noOfRegister > 50)
        return totalBeforeDisc * 0.9;
    else
        return totalBeforeDisc;
}