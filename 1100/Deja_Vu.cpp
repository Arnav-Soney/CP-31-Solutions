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
    ll t, n, q;
    cin >> t;
    while(t--){
        cin >> n >> q;
        vll a(n), x(q);
        fr(0,n) cin >> a[i];
        fr(0,q) cin >> x[i];
        ll mn = LONG_LONG_MAX;
        for(int i=0 ; i<q ; i++){
            if(mn>x[i]){
                mn = x[i];
                for(int j=0 ; j<n ; j++){
                    if(a[j]%(1LL<<x[i])==0) a[j] += (1LL<<(x[i]-1));
                }
            }
        }
        for(auto it: a) cout<< it <<" ";
        cout<<endl;
    }
    return 0;
}