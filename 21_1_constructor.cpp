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

    void printInfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;
    }//parameterized constructor

};

int main(){
    student a("Urvi",20,1);
    student b("Ram",2,18);
    a.printInfo();
    b.printInfo();
    student c;
    student d=a;


    return 0;
}