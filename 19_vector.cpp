#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(int i = 0; i <v.size(); i++){
        cout << v[i] << endl;
    }//1 2 3

    cout << endl;

    vector<int>::iterator it = v.begin();
    for(it = v.begin();it!=v.end();it++) {
        cout<<*it<<endl;
    }//1 2 3

    cout << endl;

    for(auto element:v){
        cout<<element<<endl;
    }//1 2 3

    cout << endl;

    v.pop_back();//1 2

    vector<int> v2 (3,50);
    // 50 50 50

    swap(v,v2);

    for(auto element:v){
        cout<<element<<endl;
    }
    cout<<endl;

    for(auto element:v2){
        cout<<element<<endl;
    }
    cout<<endl;
    vector<int> v3{ 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
 
    sort(v3.begin(), v3.end());
 
    cout << "Sorted \n";
    for (auto x : v3)
        cout << x << " ";
    return 0;
}