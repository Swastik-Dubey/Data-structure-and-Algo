#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    string s="qwertyuiopasdfghjklzxcvbnm";
    sort(s.begin(), s.end());
    cout << s << endl;
    string s2="987654321";
    sort(s2.begin(), s2.end());
    cout << s2 << endl;

    string s3="mnbvcxz7654";
    sort(s3.begin(), s3.end());
    cout << s3 << endl;

}