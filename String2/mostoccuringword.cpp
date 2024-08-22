#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string s = "prithvi is a student. he is a dsa mentor as well";
    stringstream ss(s);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    cout<<endl;
    sort(v.begin(),v.end());
    int maxcount = 1;
    int count = 1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count = 1;
        if(maxcount<count) maxcount = count;
    }
    count = 1;
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count = 1;
        if(count==maxcount){
            cout<<v[i]<<" "<<maxcount<<endl;
        }
    }


}
