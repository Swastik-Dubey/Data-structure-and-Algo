#include<bits/stdc++.h>

using namespace std;

int main(){
    string s="hello world";
    s.erase(3,5);
    cout<<s<<endl;
    string s1="hello world";
    cout<<s1.find("lo")<<endl;

    cout<<s1.insert(2,"lol")<<endl;
    cout<<s1.length()<<endl;
    s1.resize(6);
    cout<<s1<<endl;
    cout<<s1.size()<<endl;

    string s2="SwastikDubey";
    cout<<s2.substr(3,4)<<endl;

    string s3="786";
    int x=stoi(s3);
    cout<<x+2<<endl;


    int y=100;
    cout<<to_string(y)+"2"<<endl;
    return 0;

}