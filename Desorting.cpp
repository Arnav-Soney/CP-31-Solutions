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
        bool isSorted = true;
        for(int i=0 ; i<n-1 ; i++){
            if(arr[i+1]<arr[i]){
                isSorted = false;
            }
        }
        if(!isSorted){
            cout<<"0"<<endl;
        }
        else{
            int low = arr[0];
            int high = arr[1];
            int diff = INT_MAX;
            for(int i=0 ; i<n-1 ; i++){
                if(diff>(arr[i+1]-arr[i])){
                    diff = arr[i+1]-arr[i];
                    low = arr[i];
                    high = arr[i+1];
                }
            }
            int count = diff/2 + 1;
            cout<<count<<endl;
        }
    }
}