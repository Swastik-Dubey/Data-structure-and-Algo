#include <iostream>
using namespace std;
int main(){
    int a;//declaration
    a=12;//initialization
    cout<<"size of int :"<<sizeof(a)<<endl;

    float b;//declaration
    cout<<"size of float :"<<sizeof(b)<<endl;

    char c;//declaration
    cout<<"size of char :"<<sizeof(c)<<endl;

    bool d;//declaration
    cout<<"size of bool :"<<sizeof(d)<<endl;

    double e;//declaration
    cout<<"size of double :"<<sizeof(e)<<endl;

    short int si;
    long int li;
    cout<<"size of short int :"<<sizeof(si)<<endl;
    cout<<"size of long int:"<<sizeof(li)<<endl;
    return 0;
}