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
ll calculate_Water(vll& a, ll h, ll n){
    ll ans = 0;
    for(int i=0 ; i<n ; i++){
        if(a[i]<h) ans += (h-a[i]);
    }
    return ans;
}

int main(){
    fast_io;
    ll t, n, x;
    cin >> t;
    while(t--){
        cin >> n >> x;
        vll a(n);
        fr(0,n) cin>>a[i];
        ll low = 0, high = INT_MAX;
        ll mid;
        while(low<high){
            mid = low+(high-low)/2;
            ll water = calculate_Water(a, mid, n);
            if(water>x){
                high = mid;
            }
            else{
                low = mid+1;
            }
        }
        cout<<low-1<<endl;
    }
    return 0;
}