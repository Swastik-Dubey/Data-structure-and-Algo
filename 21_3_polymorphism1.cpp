//function overloading
#include<iostream>
using namespace std;

class function_overloading{
    public:
    void fun(){
        cout<<"I am function with no arguments"<<endl;
    
    }
    void fun(int x){
        cout<<"I am function with int  arguments"<<endl;
    }
    void fun(double x){
        cout<<"I am function with double  arguments"<<endl;
    }
};

int main(){
    function_overloading obj;
    obj.fun();
    obj.fun(4);
    obj.fun(6.2);
    return 0;
}