#include <iostream>
using namespace std;
int main(){
    // What is a pointer? ---> data type which holds the adress of other data types

    // & -->(Address of) Operator  
    int a = 3;
    int* b = &a;
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of b is "<<b<<endl;
    
    // * --> (Value at) Dereference Operator
    cout<<"The value at address b "<<*b<<endl;

    // Pointer to pointer
    int**c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value of address at c is "<<*c<<endl;
    cout<<"The value of address at (value_at(value_at(c)) "<<**c<<endl;
    return 0;
}