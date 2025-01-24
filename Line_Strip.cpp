#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,dist;
        cin>>n>>dist;
        int* arr = new int[n];
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
        int maxi = max(2*(dist-arr[n-1]),arr[0]);
        for(int i=1 ; i<n ; i++){
            maxi = max(maxi,arr[i]-arr[i-1]);
        }
        cout<<maxi<<endl;
        delete arr;
    }
}