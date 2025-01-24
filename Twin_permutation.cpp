#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int* arr = new int[n];
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
        for(int i=0 ; i<n-1 ; i++){
            cout<<n+1-arr[i]<<" ";
        }
        cout<<n+1-arr[n-1]<<endl;
        delete arr;
    }
}