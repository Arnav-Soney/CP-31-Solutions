#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int filled = 0,length = 0;
        for(int i=0 ; i<n ; i++){
            if(s[i]=='.'){
                length++;
            }
            if(length>=3){
                break;
            }
            else if(s[i]=='#' && s[i-1]=='.'){
                filled += (length/2 +1);
                length = 0;
            }
        }
        if(length!=0){
            filled += length/2 +1;
        }
        if(length>=3){
            cout<<"2"<<endl;
        }
        else{
            cout<<filled<<endl;
        }
    }
}