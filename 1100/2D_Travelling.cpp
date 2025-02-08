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
typedef pair<ll,ll> pll;
int main(){
    fast_io;
    ll t, n, k, a, b;
    cin >> t;
    while(t--){
        cin >> n >> k >> a >> b;
        vector<pll> v(n);
        fr(0,n){
            ll x, y;
            cin>>x >> y;
            v[i] = {x,y};
        }
        ll ans = abs(v[a-1].first - v[b-1].first) + abs(v[a-1].second - v[b-1].second); // |xa-xb| + |ya-yb|
        ll miniA = 1e18, miniB = 1e18;
        rep(i, 0, k){
            ll temp1 = abs(v[i].first - v[a-1].first) + abs(v[i].second - v[a-1].second); // |xi-xa| + |yi-ya|
            ll temp2 = abs(v[i].first - v[b-1].first) + abs(v[i].second - v[b-1].second); // |xi-xb| + |yi-yb|
            miniA = min(miniA, temp1);
            miniB = min(miniB, temp2);
        }
        ans = min(ans, miniA+miniB);
        cout<<ans<<endl;
    }
    return 0;
}