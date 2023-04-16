#include <iostream>
using namespace std;

class employee{
    int id;
    static int count;
    public:
    void setdata(void){
        cout<<"Enter the id "<<endl;
        cin>>id;
    }
    void getdata(void){
        cout<<"The id of employee is "<<id<<endl;

        cout<<id;
    }
    static void getcount(void){
        cout<<"The value of count is "<<count<<endl;
    }

};

int employee::count; // Default value is 0

int main(){
    employee harry, rohan, someone;
    // Count is the member of 
    // harry.id=1;
    // harry.count=1; // Cannot do this as id and count are private

    harry.setdata();
    harry.getdata();
    employee::getcount();
    
    employee::getcount();
    rohan.setdata();
    rohan.getdata();
    employee::getcount();
    someone.setdata();
    someone.getdata();
return 0;
}