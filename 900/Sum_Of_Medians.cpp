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
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
typedef pair<int,int> pii;
int main(){
    fast_io;
    ll t,n,k;
    cin >> t;
    while(t--){
        cin >> n>>k;
        ll m = n*k,index=m,sum=0;
        vector<int> arr(m);
        fr(0,m) cin>>arr[i];
        fr(0,k){
            index = index-(1+n/2);
            sum += arr[index];
        }
        cout<<sum<<endl;
    }
    return 0;
}