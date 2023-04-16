#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setid(void)
    {
        salary = 122;
        cout << "Enter the id of employee " << endl;
        cin >> id;
    }
    void getid(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{
    // employee harry, rohan, lovish, shruti;
    // harry.setid();
    // harry.getid();

    /* If we have more than 4 employee than we can make a company name and make an array
to put all the company employee together */

    /* Example of how we can make an array of company name and can put all the employee
together */

    employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }

    return 0;
}