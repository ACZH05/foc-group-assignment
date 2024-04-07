#include <iostream>
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

int main()
{
    // create an object for autoCAD Basic
    courseInfo autoCAD("1-AutoCAD Basic", 1, 1470);

    // create an object for Microsoft Excel Basic
    courseInfo msExcelBasic("2-Microsoft Excel Basic", 2, 525);

    // create an object for Microsoft Project
    courseInfo msProject("3-Microsoft Project", 3, 1570);

    // create an object for Invoice Strategic Implementing
    courseInfo eInvoice("4-E-Invoice Strategic Implementing", 4, 850);

    // create an object for Analyzing Data
    courseInfo analyzingData("5-Analyzing Data", 5, 1890);

    return 0;
}