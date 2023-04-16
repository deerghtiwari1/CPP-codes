#include <iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eid;
    char favchar;
    float salary;
} ep;

union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};

int main(){
    enum meal{breakfast, luch, dinner};
    meal m1: lunch;
    cout<<(m1==2);
    // ep deergh;
    // union money m1;
    // m1.rice = 34;
    // cout<<m1.rice;
    // struct employee deergh;
    // deergh.eid = 1;
    // deergh.favchar = 'd';
    // deergh.salary = 1200000;
    // cout<<"The value is "<<deergh.eid<<endl;
    // cout<<"The value is "<<deergh.favchar<<endl;
    // cout<<"The value is "<<deergh.salary<<endl;
    

return 0;
}