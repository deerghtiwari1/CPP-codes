#include <iostream>
using namespace std;
int main(){

    // int a=10;
    // int*aptr=&a;
 
    // cout<<*aptr<<endl;
    // *aptr=20;
    // cout<<a<,endl;

    // int arr[]={10,20,30};
    // cout<<*arr<<endl;

    // int *ptr=arr;
    // for(int i=0;i<3;i++){
    //     cout<<*ptr<<endl;
    //     ptr++;  
    // }

// Passing pointers to function:

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int a=2;
int b=4;

swap(&a,&b);
cout<<a<<" "<<b<<endl;

return 0;
}