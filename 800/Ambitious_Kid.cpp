#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int mn = INT_MAX;
    for(int i=0 ; i<n ; i++){
        mn = min(mn,abs(arr[i]-0));
    }
    cout<<mn;
}