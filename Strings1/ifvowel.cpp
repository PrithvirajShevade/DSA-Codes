#include<iostream>
using namespace std;
int main(){
    string s = "Prithviraj";
    int count = 0;
    for(int i=0;i!='\0';i++){
        if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o' ||s[i]=='u'){
            count++;
        }
        cout<<count;
        
    }
}