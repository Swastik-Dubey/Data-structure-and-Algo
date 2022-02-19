#include<iostream>
using namespace std;

class emp {
    int a;
    public:
    char b;
    int c=a;
    int d;
    int input(int a, int d){
        cout<<a+d;

    }

};
int main(){
    emp e1;
    cin>>e1.b;
    cin>>e1.c;
    cin>>e1.d;
    e1.input(e1.c, e1.d);
  

    
 
 
     return 0;
}
