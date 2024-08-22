#include<iostream>
using namespace std;
int main(){
    // string s = "prithviraj";  // in c++ string are mutable(changable)
    // cout<<s<<endl;
    // s[2] = 't';
    // cout<<s;

    string s = "prithviraj";
    cout<<s<<endl;
    for(int i=0;s[i]!='\0';i++){
        if(i%2==0) s[i]='a';
    }
    cout<<s<<endl;
}