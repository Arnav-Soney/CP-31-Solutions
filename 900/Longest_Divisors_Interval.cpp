#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long x=1;
        while(n%x==0){
            x ++;
        }
        cout<<x-1<<endl;
    }
}