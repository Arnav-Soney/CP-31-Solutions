#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        bool flag = false;
        for(int i=0 ; i<=5 ; i++){
            if(x.find(s)!=string::npos){
                cout<<i<<endl;
                flag = true;
                break;
            }
            x.append(x);
        }
        if(!flag) cout<<-1<<endl;
    }
}