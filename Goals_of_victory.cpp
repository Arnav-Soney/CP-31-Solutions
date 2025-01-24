#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> t(n-1);
        for(int i=0 ; i<n-1 ; i++){
            cin>>t[i];
        }
        int ans = 0;
        for(int i=0 ; i<n-1 ; i++){
            ans += t[i];
        }
        cout<<(0-ans)<<endl;
    }
}