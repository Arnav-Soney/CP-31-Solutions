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
        vll a(n),b(n);
        vll sub_a(2*n+1,0),sub_b(2*n+1,0);
        ll mx = LONG_LONG_MIN;
        fr(0,n) cin>>a[i];
        fr(0,n) cin>>b[i];
        ll range = 1;
        for(int i=0 ; i<n-1 ; i++){
            if(a[i]==a[i+1]){
                range++;
            }
            else{
                sub_a[a[i]] = max(sub_a[a[i]],range);
                range = 1;
            }
        }
        sub_a[a[n-1]] = max(range,sub_a[a[n-1]]);
        range = 1;
        for(int i=0 ; i<n-1 ; i++){
            if(b[i]==b[i+1]){
                range++;
            }
            else{
                sub_b[b[i]] = max(sub_b[b[i]],range);
                range = 1;
            }
        }
        sub_b[b[n-1]] = max(sub_b[b[n-1]],range);
        for(ll i = 0 ; i<2*n+1 ; i++){
            mx = max(sub_a[i]+sub_b[i],mx);
        }
        cout<<mx<<endl;
    }
    return 0;
}