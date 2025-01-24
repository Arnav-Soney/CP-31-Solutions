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
        unordered_map<int,int> freq;
        int op = 0;
        for(int i=0 ; i<n ; i++){
            freq[arr[i]]++;
        }
        if(freq[1]>=freq[-1] && freq[-1]%2==0) cout<<0<<endl;
        else{
            while(freq[1]<freq[-1] || freq[-1]%2!=0){
                op++;
                freq[1]++;
                freq[-1]--;
            }
            cout<<op<<endl;
        }
    }
}