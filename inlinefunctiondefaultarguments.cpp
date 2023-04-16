#include <iostream>
using namespace std;

int product(int a, int b){
    // Static is not recommended to use with inline function
    //static int c = 0; // This executes only once
    //c = c+1; // Next time this function is run, the value of c will bw retained
    //return a*b;
}
int moneyrecieved(int currentmoney, float factor = 1.40){
    return currentmoney*factor;
}

int main(){
    int a, b;
    // cout<<"Enter the value of a and b "<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b);

    int money = 100000;
    cout<<"If you have "<<money<<" rs in your bank account, you will recieve "<<moneyrecieved(money)<<" Rs after 1 year ";

return 0;
}