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
        cin >> n >> x;
        vll a(n);
        fr(0,n) cin>>a[i];
        ll l = a[0]-x, r = a[0]+x, changes = 0;
        for(int i=1 ; i<n ; i++){
            l = max(l,a[i]-x);
            r = min(r,a[i]+x);
            if(l>r){
                changes++;
                l = a[i]-x;
                r = a[i]+x;
            }
        }
        cout<<changes<<endl;
    }
    return 0;
}