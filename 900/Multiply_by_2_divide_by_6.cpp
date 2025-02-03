#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int count = 0;
        if(n==1) cout<<count<<endl;
        else{
            while((n!=1 && n!=2)&& n<INT_MAX){
                if(n==2) break;
                if(n%6==0) n /= 6;
                else n *= 2;
                count++;
            }
            if(n==2 || n>=INT_MAX) cout<<-1<<endl;
            else cout<<count<<endl;
        }
    }
}


