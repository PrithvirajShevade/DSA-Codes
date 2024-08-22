//odd star triangle and then star pyramid

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++){

         //space
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }

        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

// OR  using nsp and nst

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"No of rows : ";
//     cin>>n;
//     int nsp = n-1;
//     int nst = 1;
//     for(int i=1;i<=n;i++){
//         //spaces
//         for(int j=1;j<=nsp;j++){
//             cout<<" ";
//         }
//         nsp--;
//         for(int k=1;k<=nst;k++){  //decrement 
//             cout<<"*";
//         }
//         nst+=2;                  //adding two in the next line
//         cout<<endl;

//     }
// }

