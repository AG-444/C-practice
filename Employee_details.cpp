#include <iostream>
using namespace std;

class employees
{
public:
    char name[50];
    int salary;
    char doj[20];
    void getdetails();
    void printdetails();
};

void employees::getdetails()
{
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter salary: ";
    cin >> salary;
    cout << "Enter Date of Joining: ";
    cin >> doj;
}

void employees::printdetails()
{
    cout<<"Name:" << name << "\n";
    cout <<"Salary:"<< salary << "\n";
    cout <<"Date of Joining: "<<doj << endl;
}

int main()
{
    employees employee[10];
    int n, i;

    cout << "Enter details for 10 employees:"<<"\n";
    for (i = 0; i < 10; i++)
    {
        cout <<"\n"<< "Enter details for employee number " << i + 1 << ":"<< "\n";
        employee[i].getdetails();
    }

    cout << "Details of 10 employees are:" << endl;
    for (i = 0; i < 10; i++)
    {
        employee[i].printdetails();
    }
    return 0;
}
