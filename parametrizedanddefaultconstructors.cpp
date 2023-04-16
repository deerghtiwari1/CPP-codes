#include <iostream>
using namespace std;

class complex{
    int a,b;
    public:
    complex(int, int); // Constuctor declaration
    void printnumber(){
        cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
    }
};

complex :: complex(int x, int y){ //--> This is a parametrized constructor as it takes 2 parameters
    a = x;
    b = y;
}

int main(){
    // Implicit call
    complex a(4,6);

    // Explicit call
    complex b = complex(5,7);

    a.printnumber();
    b.printnumber();

return 0;
}