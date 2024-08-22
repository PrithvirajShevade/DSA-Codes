#include<iostream>
using namespace std;
int main(){
    // string s = "abcdef";
    // //cout<<s.substr(2);
    // cout<<s.substr(1,3);

    string s;
    cin>>s;
    //abcdefgh -> n=8
    int n = s.size();
    cout<<s.substr(n/2);
}