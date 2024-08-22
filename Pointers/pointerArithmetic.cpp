// #include<iostream>
// using namespace std;
// int main(){
//     int x = 7;
//     int* p = &x;
//     cout<<p<<endl;
//     p = p + 1;
//     cout<<p<<endl;
// }


//predict the output

#include<iostream>
using namespace std;
int main(){
    int a=15;
    int *ptr =&a;
    //int b = ++(*ptr);  //preincrement
    int b = (*ptr)++;    //postincrement
    cout<<a<<" "<<b;

}
