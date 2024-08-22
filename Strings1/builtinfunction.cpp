#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    // string s = "prithviraj";
    // cout<<s.size();  // or u cane write lenght instead of size
    // int size = s.size();

    // string s = "abcd";
    // cout<<s<<endl;
    // s.push_back('e');
    // s.push_back('f');
    // s.push_back('g');
    // cout<<s<<endl;
    // s.pop_back();
    // s.pop_back();
    // cout<<s;

    // string s = "prithvi ";
    // s = s + "shevade";    //add
    // cout<<s;

    string s = "abcdef";
    cout<<s<<endl;
    reverse(s.begin()+2, s.end()-1);
    cout<<s;
}