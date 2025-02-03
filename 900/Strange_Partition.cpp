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
    ll t, n,x;
    cin >> t;
    while(t--){
        cin >> n>>x;
        vector<int> arr(n);
        fr(0,n) cin>>arr[i];
        ll mx=0,mn=0;
        fr(0,n){
            if(arr[i]%x==0) mx+=arr[i]/x;
            else mx += (arr[i]/x)+1;
            mn += arr[i];
        }
        if(mn%x==0) mn = mn/x;
        else mn = (mn/x)+1;
        cout<<mn<<" "<<mx<<endl;
    }
    return 0;
}