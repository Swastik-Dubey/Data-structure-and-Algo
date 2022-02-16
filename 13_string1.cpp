#include <iostream>
#include <string>
using namespace std;
int main(){
    string str="anhfehfhfh jehefh fhefh";
    str.clear();
    cout<<str<<endl;

    string str1="abc";
    string str2="xyz";
    string str3="abc";
    cout<<str2.compare(str1)<<endl;
    cout<<str3.compare(str1)<<endl;

    if(str1.compare(str3) ==0){
        cout<<"string is equal"<<endl;
    }
    if(!str1.compare(str3)){
        cout<<"string is equal"<<endl;
    }

    string s1="abc";
    string s2="abc";
    s1.clear();
    if(s1.empty()){
        cout<<"string is empty"<<endl;
    }
    if(!s2.empty()){
        cout<<"string is not empty"<<endl;
    }


    return 0;}