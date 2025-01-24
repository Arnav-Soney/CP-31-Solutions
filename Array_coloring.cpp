#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin>>arr[i];
        }
        int prefixSum = 0,suffixSum = 0;
        for(int i=0 ; i<n ; i++){
            suffixSum += arr[i];
        }
        bool flag = false;
        for(int i=0 ; i<n ; i++){
            prefixSum += arr[i];
            suffixSum -= arr[i];
            if(prefixSum%2==0 && suffixSum%2==0){
                flag = true;
                break;
            }
            if(prefixSum%2!=0 && suffixSum%2!=0){
                flag = true;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}