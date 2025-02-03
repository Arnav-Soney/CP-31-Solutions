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

ll solve(ll a){
    ll cnt = 0;
    while(a>0){
        a /= 2;
        cnt++;
    }
    return cnt;
}

int main(){
    fast_io;
    ll t, n;
    cin >> t;
    while(t--){
        cin >> n;
        ll k = solve(n-1)-1;
        ll p = pow(2,k)-1, q = pow(2,k);
        while(p>=0){
            cout<<p<<" ";
            p--;
        }
        while(q<=n-1){
            cout<<q<<" ";
            q++;
        }
        cout<<endl;
    }
    return 0;
}