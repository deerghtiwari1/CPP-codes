#include <iostream>
using namespace std;

// Function overloading

// class Student{
//     public:
//     void fun(){
//         cout<<"I am a function with no // arguments"<<endl;
//     }
//     void fun(int x){
//         cout<<"I am function with int // argumeent"<<endl;
//     }
//     void fun(double x){
//         cout<<"I am a function with // double argument"<<endl;
//     }
// };
// 
// int main(){
//     Student obj;
//     obj.fun();
//     obj.fun(4);
//     obj.fun(6.2);
// 
// return 0;
// }

// Operator Overloading:

// class complex{
//     private:
//     int real, imag;
//     public:
//     complex(int r=0, int i=0){
//         real = r;
//         imag = i;
//     }
//     complex operator + (complex const &// obj){
//         complex res;
//         res.imag=imag+obj.imag;
//         res.real=real+obj.real;
//         return res;
//     }
//     void display(){
//         cout<<real<<"+i"<<imag<<endl;
//     }
// };
// 
// int main(){
// 
//     complex c1(12,7);
//     complex c2(6,7);
//     complex c3 = c1 + c2;
//     c3.display();
//     return 0;
// }

// Function overwriting:

class base{
    public:
    virtual void print(){
        cout<<"This is the base class's print function"<<endl;
    }
    void display(){
        cout<<"This is the base class's display function"<<endl;
    }
};

class derived: public base{
    public:
    void print(){
        cout<<"This is the derived class's print function"<<endl;
    }
    void display(){
        cout<<"This is the derived class's display function"<<endl;
    }

};

int main(){

    base *baseptr;
    derived d;
    baseptr=&d;

    baseptr -> print();

    baseptr -> display();


    return 0;
}