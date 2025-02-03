#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int count = 0;
        vector<int> freq(26,0);
        for(int i=0 ; i<s.length() ; i++){
            freq[s[i]-'a'] += 1;
        }
        for(int i=0 ; i<26 ; i++){
            if(freq[i]%2!=0) count++;
        }
        if(count>k+1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
