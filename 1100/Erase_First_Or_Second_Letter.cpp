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
#define vi vector<int>
#define vll vector<long long>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
typedef pair<int,int> pii;

int main(){
    fast_io;
    ll t, n;
    cin >> t;
    while(t--){
        cin >> n;
        string s;
        cin >> s;
        vector<int> idx(26,-1);
        ll ans = 0;
        for(int i=0 ; i<n ; i++){
            if(idx[s[i]-'a']==-1){
                idx[s[i]-'a'] = i;
                ans += n-i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}