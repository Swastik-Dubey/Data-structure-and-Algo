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
        name =s;
        age=a;
        gender=g;

    }//constructor

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
    student c();
    c.printInfo();

    return 0;
}