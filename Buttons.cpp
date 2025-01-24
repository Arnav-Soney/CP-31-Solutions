#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(c%2!=0){
            // ana wins
            if(a>=b){
                cout<<"First";
            }
            else{
                cout<<"Second";
            }
        }
        else{
            // katie wins
            if(b>=a){
                cout<<"Second";
            }
            else{
                cout<<"First";
            }
        }
        cout<<endl;
    }
}