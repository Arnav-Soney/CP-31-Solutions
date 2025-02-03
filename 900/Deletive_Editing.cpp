#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
typedef pair<int,int> pii;
int main(){
    fast_io;
    ll t;
    cin >> t;
    while(t--){
        string s1,s2;
        cin >>s1 >> s2;
        vector<int> match(s2.length(),-1);
        vector<bool> v(s1.length(),false);
        bool flag = true;
        if(s1.length()==s2.length()){
            if(s1!=s2) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
            continue;
        }
        for(int i=s2.length()-1 ; i>=0 ; i--){
            for(int j=s1.length()-1 ; j>=0 ; j--){
                if(s1[j]==s2[i] && !v[j]){
                    match[i] = j;
                    v[j] = true; // mark it visited
                    break;
                }
            }
            if(match[i]==-1){
                flag = false;
                break;
            }
        }
        if(flag){
            int k;
            for(k=0 ; k<s2.length()-1 ; k++){
                if(match[k+1]<match[k]){
                    flag = false;
                    break;
                }
            }
        }
        if(!flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}