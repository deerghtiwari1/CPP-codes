#include<iostream>
using namespace std;

int main(){
    // cout<<"This is control structures";
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;

 // Selection control structure: If-else ladder
    //if((age<18) && (age>0)){
    //    cout<<"You can not come to my party"<<endl;
    //}
    //else if(age==18){
    //    cout<<"You can come by taking a kid pass"<<endl;
    //}
    //else if(age<1){
    //    cout<<"You are not yet born"<<endl;
    //}
    //else{
    //    cout<<"You can come to the party"<<endl;
    //}

    
  // Selection control structure (2nd method): Switch case statements
  switch (age)
  {
  case 18:
      /* code */
      cout<<"You are 18"<<endl;
      break;

  case 22:
      /* code */
      cout<<"You are 22"<<endl;
      break;

  case 2:
      /* code */
      cout<<"You are 2"<<endl;
      break;
    
  default:
  cout<<"No special cases"<<endl;
      break;
  } 


    return 0;

}