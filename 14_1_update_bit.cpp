#include<iostream>
using namespace std; 

int update_Bit(int n, int pos,int value){
    int masks= ~(1<<pos);
    n= n & masks;
    return (n | (value << pos)) ;
}

int main(){
    cout<<update_Bit(5,1,1)<<endl;
   
    return 0;
}