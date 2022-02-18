#include<iostream>
using namespace std;

class student{
    string name;
    public:
    int age;
    bool gender;

    student(){
        cout<<"Default constructor"<<endl;
    }//Default constructor

    student(string s, int a,int g){
        cout<<"Parameterised constructor"<<endl;
        name =s;
        age=a;
        gender=g;

    }// Parameterised constructor

    student (student &a){
        cout<<"Copy constructor"<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;

    }

    ~student(){
        cout<<"Destructor called"<<endl;
    }
    void printInfo(){
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
    student a("Urvi",20,1);
   
    a.printInfo();
 
    student c;
    student d=a;

    if(d==a){
        cout<<"Same"<<endl;
            }
    else{
        cout<<" Not Same"<<endl;
    }        

    return 0;
}