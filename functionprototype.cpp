#include <iostream>
using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;
}
// Function Prototype
// Type function name (arguments):
int main(){
    int num1, num2;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1, num2);

return 0;
}