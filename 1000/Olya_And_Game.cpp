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
    ll t, n, m;
    cin >> t;
    while(t--){
        cin >> n;
        priority_queue<pii> pq;
        priority_queue<ll,vector<ll>,greater<ll>> q;
        fr(0,n){
            cin >> m;
            vll arr(m);
            fr(0,m) cin>>arr[i];
            sort(arr.begin(),arr.end());
            pq.push({arr[1],arr[0]});
        }
        ll ans = 0;
        while(pq.size()!=1){
            ll a = pq.top().first;
            q.push(pq.top().second);
            pq.pop();
            ans += a;
        }
        q.push(pq.top().second);
        pq.pop();
        ans += q.top();
        cout << ans << endl;
    }
    return 0;
}