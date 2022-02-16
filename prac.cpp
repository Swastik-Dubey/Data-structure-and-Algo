#include<iostream>
using namespace std;
int main(){
    int a=rand();
    cout<<a;
    int b;
    cin >> b;

    while(b>0){
        if(b==rand()){
            cout<<"match";

        }
        else if(b<=rand()){
            cout<<"less";
        }
        else if(b>=rand()){
            cout<<"greater";
        }

        cin >>b;

    }
 
 
     return 0;
}
