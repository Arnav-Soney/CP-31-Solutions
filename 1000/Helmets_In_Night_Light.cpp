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
    ll t, n, p;
    cin >> t;
    while(t--){
        cin >> n >> p;
        vll a(n);
        for(ll i=0 ; i<n ; i++) cin>>a[i];
        priority_queue<pii,vector<pii>,greater<pii>> pq;
        for(ll i=0 ; i<n ; i++){
            ll x;
            cin>>x;
            pq.push({x,a[i]}); // {cost,number of person}
        }
        pq.push({p,n});
        ll total = p;
        n--;
        while(n>0 && !pq.empty()){
            ll cost = pq.top().first;
            ll people = pq.top().second;
            pq.pop();
            if((n-people)>0){
                total += cost*people;
                n -= people;
                continue;
            }
            else{
                total += cost*n;
                n = 0;
            }
        }
        cout<<total<<endl;
    }
    return 0;
}