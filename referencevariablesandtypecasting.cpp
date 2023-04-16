#include<iostream>

using namespace std;

int main(){
    // **************Float double and long double Literals***************
    //float a = 34.4F;
    //long double b = 34.4L;
    //cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    //cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    //cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    //cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    //cout<<"The value of a is "<<a<<endl<<"The value of b is "<<b;

    //*************Reference Variables**********************
    // Deergh Tiwari --> Chiku --> Guitarist
    //float x = 455;
    //float & y = x;
    //cout<<x<<endl;
    //cout<<y<<endl;

    // *************Typecating***********
    int a = 45;
    float b = 45.46;
    cout<<"The value of a is "<<float(a)<<endl;
    cout<<"The value of b is "<<(float)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    cout<<"The value of a is "<<(int)a<<endl;
    int c = (int)b;

    cout<<"The expression is "<<a+b<<endl;
    cout<<"The expression is "<<a+(int)a<<endl;
    cout<<"The expression is "<<a+int(b)<<endl;
 

    return 0;
}