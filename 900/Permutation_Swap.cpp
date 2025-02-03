#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0 ; i<n ; i++) cin>>arr[i];
        int GCD = gcd(max(arr[0]-1,arr[1]-2),min(arr[0]-1,arr[1]-2));
        for(int i=2 ; i<n ; i++){
            GCD = gcd(max(GCD,arr[i]-i-1),min(GCD,arr[i]-i-1));
        }
        cout<<abs(GCD)<<endl;
    }
}