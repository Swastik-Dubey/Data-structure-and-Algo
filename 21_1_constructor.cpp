#include<iostream>
using namespace std;

class student{
    string name;
    public:
    int age;
    bool gender;

    student(string s, int a,int g){
        name =s;
        age=a;
        gender=g;

    }

    void printInfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;
    }

};

int main(){
    student a("Urvi",20,1);

    return 0;
}