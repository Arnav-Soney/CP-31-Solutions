#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        //cout<<endl;
        vector<int> v(n);
        vector<int> a;
        for(int i=0; i<n ; i++){
            cin>>v[i];
        }
        a.push_back(v[0]);
        for(int i=1 ; i<n ; i++){
            if(v[i]<v[i-1]){
                a.push_back(1);
            }
            a.push_back(v[i]);
        }
        int m = a.size();
        cout<<m<<endl;
        for(int i=0 ; i<m-1 ; i++){
            cout<<a[i]<<" ";
        }
        cout<<a[m-1]<<endl;
    }
}