#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string s = "prithvi is a student";
    stringstream ss(s);
    cout<<s<<endl;
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
}
