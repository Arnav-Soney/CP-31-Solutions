#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
        int ans = 0;
        for(int i=0 ; i<n ; i++) ans ^= arr[i];
        if(n%2==0){
            if(ans!=0) cout<<-1<<endl;
            else cout<<0<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
}