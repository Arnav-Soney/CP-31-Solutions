#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        // Taking input in array
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        if(n%2==0){
            if(arr[0]==arr[n/2-1] &&  arr[n/2]==arr[n-1]){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        else{
            if(arr[0]==arr[n/2-1] && arr[n/2+1]==arr[n-1] && (arr[n/2]==arr[n/2-1] || arr[n/2]==arr[n/2+1])){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
}