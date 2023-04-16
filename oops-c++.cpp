#include <iostream>
using namespace std;

class student{
    string name;
    public:
    
    int age;
    bool gender;

    student(){
        cout<<"Default constructor"<<endl;
    }

    student(string s, int a, int g){
        cout<<"Paramatrised constructor"<<endl;
        name = s;
        age = a;
        gender = g;
    } // Parameterised Constructor 

    student(student &a){
        cout<<"Copy constructor"<<endl;
        name = a.name;
        age=a.age;
        gender=a.gender;
        
    }

    ~student(){
        cout<<"Destructor called"<<endl;
    }
    void setname(string s){
        name=s;
    }

    void getname(){
        cout<<name<<endl;
    }

    void printinfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;

    }
    bool operator == (student &a){
        if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }
        return false;
    }
};

int main(){

    // student arr[3];
    // for(int i=0;i<3;i++){
    //     string s;
    //     cout<<"Name = ";
    //     cin>>s;
    //     arr[i].setname(s);
    //     cout<<"Age = ";
    //     cin>>arr[i].age;
    //     cout<<"Gender = ";
    //     cin>>arr[i].gender;
    // }
// 
    // for(int i=0;i<3;i++){
    //     arr[i].printinfo();
    // }

    student a("Deergh", 20, 1);
    a.printinfo();
    student b;
    student c = a;

    if(c==a){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not same"<<endl;
    }

return 0;
}