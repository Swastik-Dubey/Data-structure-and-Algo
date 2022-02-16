#include<iostream>
using namespace std; 

int main(){
    int PocketMoney = 3000;
    for(int date=1;date<=30;date++){
        if(date%2==0){
            continue;
        }
        if(PocketMoney==0){
            cout<<"last date"<<date<<" "<<PocketMoney<<endl;
            break;
        }
        cout<<"Go out today!!!"<<date<<endl;
        PocketMoney-=300;

    }
    return 0;
}
