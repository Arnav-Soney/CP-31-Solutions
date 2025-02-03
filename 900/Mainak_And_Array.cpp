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
        vi arr(n);
        fr(0,n) cin>>arr[i];
        int ans = INT_MIN;
        // case-1  segment contains a1 and an
        fr(0,n){
            ans = max(ans,arr[(i-1+n)%n]-arr[i]);
        }
        // case-2 segement conatains a1 only
        fr(0,n-1){
            ans = max(arr[n-1]-arr[i],ans);
        }
        // case-3 segment contains an only
        fr(1,n){
            ans = max(ans,arr[i]-arr[0]);
        }
        // case-4 doesnt contain a1 and an
        ans = max(ans,arr[n-1]-arr[0]);
        cout<<ans<<endl;
    }
    return 0;
}