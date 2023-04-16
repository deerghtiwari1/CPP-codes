#include<iostream>
// There are two types of header files:
// 1. System header files: It comes with the compiler
// 2. User defined header files: It is written by the programmer

using namespace std;

int main(){
    int a=10, b=20;
    cout<<"Operators In C++"<<endl;
    cout<<"Following are the type of operators in C++"<<endl;
    // Arthemetic Operators
    cout<<"The value of a + b is "<<a+b<<endl;  
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of  a++ is " <<a++<<endl;
    cout<<"The value of  a-- is " <<a--<<endl;
    cout<<"The value of  --a is " <<--a<<endl;
    cout<<"The value of  ++a is " <<++a<<endl;
    cout<<endl;

    // Assignment Operators --> Used to assign values to variables
    //int a=3. b=9;
    //char d='d';

    // Comparsion operators
    cout<<"Following are the comparison operators of C++"<<endl;
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<endl;

    // Logical operators
    cout<<"Following are the comparison operators of C++"<<endl;
    cout<<"The value of logical and operator (a==b) && (a<b) is: "<<((a==b) && (a<b))<<endl;
    cout<<"The value of logical or operator (a==b) || (a<b) is: "<<((a==b) || (a<b))<<endl;
    cout<<"The value of logical not operator (!(a==b)) is: "<<(!(a==b))<<endl;
   


    return 0;
}