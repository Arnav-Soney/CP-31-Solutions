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

void fact(ll &ans, ll n, ll i, vll &a){
    if(i==n) return;
    ans = (ans*(n-i))%mod;
    fact(ans, n, i+1, a);
}

int main(){
    fast_io;
    ll t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vll a(n), b(n);
        fr(0, n) cin >> a[i];
        fr(0, n) cin >> b[i];
        sort(all(a));
        sort(all(b));
        ll ans = 1;
        for(ll i=0 ; i<n ; i++){
            if(a[i]<=b[i]){
                ans = 0;
                break;
            }
        }
        if(ans==0){
            cout<<ans<<endl;
            continue;
        }
        ll i = 0, j = 0;
        while(i<n && j<n){
            if(a[i]>b[j]) j++;
            else{
                ans = (ans*(j-i))%mod;
                i++;
            }
        }
        fact(ans, n, i, a);
        ll cnt = 1;
        for(ll k=i ; k<n-1 ; k++){
            if(a[k]==a[k+1])cnt++;
            else{
                ans = ans/cnt;
                cnt = 1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}