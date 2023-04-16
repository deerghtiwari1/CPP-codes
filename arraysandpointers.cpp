#include <iostream>
using namespace std;
int main(){
    // Array Examples:
    
    int marks[] = {23, 45, 56, 89};

    int mathsmarks[4];

    mathsmarks[1] = 33;
    mathsmarks[2] = 3;
    mathsmarks[3] = 334;
    mathsmarks[4] = 335;

    cout<<"These are maths marks"<<endl;
    cout<<mathsmarks[1]<<endl;
    cout<<mathsmarks[2]<<endl;
    cout<<mathsmarks[3]<<endl;
    cout<<mathsmarks[4]<<endl;

    cout<<"These are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

// For loop example:
    // for ( int i = 0; i < 4; i++)
    // {
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    // }
   
// While Loop:
    //int i = 0;
    //while(i<=4){
    //    cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    //    i++;
    //}

// Do while loop:
   // int i = 0;
   // do {
   //  cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
   //  i++;
   // }while(i<=4);

   // Pointers in array:
   int* p = marks;
   cout<<"The value of *p is "<<*p<<endl;
   cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
   cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
   cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

    
    


    



return 0
;
}