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
    ll t, n, m, x, i, j, k, q;
    cin >> t;
    while(t--){
        cin >> n;
        vector<ll> arr(n);
        fr(0,n) cin>>arr[i];
        ll ans = arr[0];
        fr(1,n) ans &= arr[i];
        cout<<ans<<endl;
    }
    return 0;
}