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
        cin >> n >> k;
        vll arr(n);
        fr(0,n) cin>>arr[i];
        sort(arr.begin(),arr.end());
        ll size = 1,s = 0,e = 0,mx = INT_MIN;
        while(e<n){
            if(e!=0){
                if(arr[e]-arr[e-1]<=k){
                    size++;
                }
                else{
                    mx = max(mx,size);
                    size = 1;
                    s = e;
                }
            }
            e++;
        }
        mx = max(mx,size);
        cout<<n-mx<<endl;
    }
    return 0;
}