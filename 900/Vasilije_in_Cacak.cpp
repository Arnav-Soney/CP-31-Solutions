#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k,x;
        cin>>n>>k>>x;
        long long int minSum = ((k)*(k+1))/2;
        long long int maxSum = ((k)*(2*n-k+1))/2;
        if(x<minSum || x>maxSum) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}