// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s = "prithviraj";
//     int max = 0;
//     for(int i=0;i<s.size();i++){
//         char ch = s[i];
//         int count = 1;
//         for(int j=i+1;j<s.size();j++){
//             if(s[j]==s[i]) count++;
//         }
//         if(max<count) max = count;
//     }
//         for(int i=0;i<s.size();i++){
//         char ch = s[i];
//         int count = 1;
//         for(int j=i+1;j<s.size();j++){
//             if(s[j]==s[i]) count++;
//         }
//         if(max==count){
//             cout<<ch<<" "<<max<<endl;
//         }
//     } 
// }    

// second and efficient method 

#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s = "prithvi";
    vector<int> arr(26,0);
    for(int i=0;i<s.size();i++){
        char ch = s[i];
        int ascii = (int)ch;
        arr[ascii-97]++;
    }
    int mx = 0;
    for(int i=0;i<26;i++){
        if(arr[i]>mx) mx = arr[i];
    }
    for(int i=0;i<26;i++){
        if(arr[i]==mx){
            int ascii = i+97;
            char ch = (char)ascii;
            cout<<ch<<" "<<mx<<endl;
        }
    }


}
