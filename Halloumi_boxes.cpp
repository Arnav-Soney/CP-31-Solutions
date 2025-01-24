#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool isSorted(int* arr,int n){
    if(n==1){
        return true;
    }
    for(int i=1 ; i<n ; i++){
        if(arr[i-1]>arr[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        cin>>k;
        int* arr = new int[n];
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
        if(!isSorted(arr,n) && k==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        delete arr;
    }
}