#include<iostream>
using namespace std;
int main(){
    int a=10;  //divident
    int b=3;   //divisor
    int q=a/b;  //quotient
    int r;      //reminder
    // a=(b*q)+r
    r = a-(b*q);
    cout<<r;
}