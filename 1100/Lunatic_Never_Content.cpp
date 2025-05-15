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

ll GCD(ll a, ll b){
    if(b==0) return a;
    else return GCD(b, a%b);
}

int main(){
    fast_io;
    ll t, n, m, x, i, j, k, q;
    cin >> t;
    while(t--){
        cin >> n;
        vll a(n);
        fr(0, n) cin >> a[i];
        ll gcd = 0;
        for(int i=0 ; i<n/2 ; i++){
            gcd = GCD(gcd, abs(a[i]-a[n-i-1]));
        }
        cout<<gcd<<endl;
    }
    return 0;
}