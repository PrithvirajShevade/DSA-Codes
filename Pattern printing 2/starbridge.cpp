#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of lines : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<"*";
        }
        //spaces
        for(int k=1;k<=i;k++){
            cout<<" ";
        }
        for(int j=1;j<=n+1-i;j++){
            cout<<"*"; 
        }
        cout<<endl;

    }
}