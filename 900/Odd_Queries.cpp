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
        cin >> n >> q;
        vll arr(n);
        vector<vector<int>> queries(q);
        fr(0,n) cin>>arr[i];
        fr(0,q){
            int l,r,k;
            cin>>l>>r>>k;
            queries[i] = {l,r,k};
        }
        vll sum(n+1);
        sum[0] = 0;
        fr(0,n){
            sum[i+1] = sum[i]+arr[i];
        }
        fr(0,q){
            int l = queries[i][0];
            int r = queries[i][1];
            int k = queries[i][2];
            if((sum[n]-(sum[r]-sum[l-1])+(r-l+1)*k)%2!=0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}