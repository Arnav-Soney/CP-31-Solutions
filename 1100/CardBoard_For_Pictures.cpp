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

ll solve(ll w, ll c, vll& a){
    ll area = 0;
    for(int i=0 ; i<a.size() ; i++){
        area += (2*w+a[i])*(2*w+a[i]);
        if(area>c) return c+1;
    }
    return area;
}

int main(){
    fast_io;
    ll t, n, c;
    cin >> t;
    while(t--){
        cin >> n >> c;
        vll a(n);
        fr(0, n) cin >> a[i];
        ll low = 1, high = 1e9, mid;
        while(low<high){
            mid = low + (high-low)/2;
            ll area = solve(mid, c, a);
            if(area == c) break;
            else if(area > c) high = mid;
            else low = mid+1;
        }
        cout<<mid<<endl;
    }
    return 0;
}