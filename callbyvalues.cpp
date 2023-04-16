#include <iostream>
using namespace std;

// Thsi will not swap a and b:
void swap (int a, int b){ // Temp a b
    int temp = a;         //   4  4 5
    a = b;                //   4  5 5
    b = temp;             //   5  5 4
}
// This will work:
// This method is call by reference using pointers:
void swappointers (int*a, int*b){ // Temp a b
    int temp = *a;         //   4  4 5
    *a = *b;                //   4  5 5
    *b = temp;             //   5  5 4

// Call by reference using C++ reference variables
void swapReferenceVar (int &a, int &b){ // Temp a b
    int temp = a;         //   4  4 5
    a = b;                //   4  5 5
    b = temp;             //   5  5 4
}

int main(){
    int a=4, b=5;
    // cout<<"The sum of 4 and 5 is "<<sum(a,b);
    cout<<"The value of a is "<<a<<" The value of b is "<<b<<endl;
    swapreferencevar(a, b);
    cout<<"The value of a is "<<a<<" The value of b is "<<b<<endl;

return 0;
}