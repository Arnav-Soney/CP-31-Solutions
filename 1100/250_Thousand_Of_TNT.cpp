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
    ll t, n, m, x, i, j, k, q;
    cin >> t;
    while(t--){
        cin >> n;
        vll a(n);
        fr(0,n) cin >> a[i];
        ll ans = 0;
        for(ll k=1 ; k<n ; k++){
            if(n%k==0){
                ll mn = LONG_LONG_MAX, mx = LONG_LONG_MIN;
                for(ll i=0 ; i<n ; i+=k){
                    ll sum = 0;
                    for(ll j=0 ; j<k ; j++){
                        sum += a[i+j];
                    }
                    mn = min(sum, mn);
                    mx = max(sum, mx);
                }
                ans = max(ans, mx-mn);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}