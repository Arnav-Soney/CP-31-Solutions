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
        vector<pii> a(n);
        fr(0,n){
            ll x;
            cin >> x;
            a[i] = {x, i}; // {value, index}
        }
        sort(all(a));
        vll prefixSum(n);
        prefixSum[0] = a[0].first;
        for(int i=1 ; i<n ; i++) prefixSum[i] = prefixSum[i-1] + a[i].first;
        vector<pii> res(n);
        res[n-1] = {a[n-1].second, n-1}; // {index, score}
        for(int i=n-2 ; i>=0 ; i--){
            res[i] = {a[i].second, i};
            if(prefixSum[i] >= a[i+1].first) res[i].second = res[i+1].second;
        }
        sort(all(res));
        for(auto it : res) cout<<it.second<<" ";
        cout<<endl;
    }
    return 0;
}