#include<iostream>
#include<string>
using namespace std;
class student
{

    int roll;
    string name;
    float marks;

public:
    void initstudent()
    {

        roll = 80198;
        name = "Rashmi Sonewane";
        marks = 70.01;
    }
    void printStudentOnConsole()
    {
        cout << "THE NAME IS:\t" << name << endl;
        cout << "THE ROLL IS:\t" << roll << endl;
        cout << "THE MARKS IS:\t" << marks << endl;
    }
    void acceptStudentFromConsole()
    {
        cout << "ENTER NAME,ROLL,MARKS:" << endl;
        cin >> name >> roll >> marks;
    }
};

int main()
{
    student Rashmi;
    /*Rashmi.initstudent();
    Rashmi.printStudentOnConsole();
    Rashmi.acceptStudentFromConsole();
    Rashmi.printStudentOnConsole();*/
    int input;
    cout << "------------menu--------------" << endl;
    cout << "enter your choice:" << endl
         << "1. To enter student details" << endl
         << "2. To display student details:";
    cin >> input;
    switch (input)
    {
    case 1:
         Rashmi.acceptStudentFromConsole();
        break;
        case 2: Rashmi.printStudentOnConsole();
        break;
        case 3: cout<< "you have entered wrong choice"<<endl;
        break;
    }
}
