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

ll solve(int m,int k){
    ll mn = m-k+1;
    if(mn<=0) return 0;
    return (mn*(mn+1))/2;
}

int main(){
    fast_io;
    ll t, n, k, q;
    cin >> t;
    while(t--){
        cin >> n >> k >> q;
        vi arr(n);
        vi v;
        fr(0,n) cin>>arr[i];
        int l=0,r=0;
        while(r<n){
            if(arr[r]>q){
                int range = r-l;
                if(range!=0)v.pb(range);
                r += 1;
                l = r;
            }
            else r++;
        }
        v.pb(r-l);
        ll sum = 0;
        for(int i=0 ; i<v.size() ; i++){
            sum += solve(v[i],k);
        }
        cout<<sum<<endl;
    }
    return 0;
}