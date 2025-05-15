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
    ll t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        vll a(n);
        vll prefixSum(n+1, 0);
        fr(0, n) cin >> a[i];
        sort(all(a));
        for(int i=0 ; i<n ; i++)prefixSum[i+1] = prefixSum[i] + a[i];
        ll ans = 0;
        for(int i=0 ; i<k+1 ; i++){
            ans = max(ans, prefixSum[n-(k-i)]-prefixSum[2*i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
