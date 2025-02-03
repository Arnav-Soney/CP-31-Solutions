#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int* arr = new int[n];
        for(int i = 0 ; i<n ; i++){
            cin>>arr[i];
        }
        int mini = arr[0],mn = n;
        for(int i=1 ; i<n ; i++){
            if(arr[i]<mn){
                mn = arr[i];
            }
        }
        if(mini<mn){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}