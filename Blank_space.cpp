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
        int maxlen = 0,count=0;
        for(int i=0 ; i<n ; i++){
            if(arr[i]==1){
                maxlen = max(maxlen,count);
                count = 0;
            }
            else{
                count++;
            }
        }
        maxlen = max(maxlen,count);
        cout<<maxlen<<endl;
        delete arr;
    }
}