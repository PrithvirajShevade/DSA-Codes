//Using extra variable

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of rows : ";
    cin>>n;
    int a = 5;
    for(int i=1;i<=n;i++){
        if(i%2!=0) a = 1;  //row no. odd
        else a = 0;        //row no. even
        for(int j=1;j<=i;j++){ 
            cout<<a;
            //fliping 
            if(a==1) a = 0;
            else a = 1;           
        }
        cout<<endl;
    }
}

//OR


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"No of rows : ";
//     cin>>n;    
//     for(int i=1;i<=n;i++){           //rows 
//         for(int j=1;j<=i;j++){       //cloumn
//             if((i+j)%2==0) cout<<1;   //  i and j is odd also even then their addition is even.
//             else cout<<0; 
          
//         }
//         cout<<endl;
//     }
// }