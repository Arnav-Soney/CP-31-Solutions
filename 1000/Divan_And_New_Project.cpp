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
    ll t, n, i;
    cin >> t;
    while(t--){
        cin >> n;
        vector<pii> arr(n), coordinates;
        fr(0,n){
            ll x;
            cin>>x;
            arr[i] = {x,i}; // {element, index}
        }
        sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());
        ll x0 = 0, ans = 0;
        vll pos, neg;
        int j = 1;
        for(int i=0 ; i<n ; i+=2){
            pos.pb(arr[i].first);
            coordinates.pb({arr[i].second,j});  // {index,coordinate}
            ans += 2*(arr[i].first)*abs(x0-j);
            j++;
        }
        j = -1;
        for(int i=1 ; i<n ; i+=2){
            neg.pb(arr[i].first);
            coordinates.pb({arr[i].second,j});
            ans += 2*(arr[i].first)*abs(x0-j);
            j--;
        }
        sort(coordinates.begin(),coordinates.end());
        cout<<ans<<endl;
        cout<<0<<" ";
        for(int i=0 ; i<coordinates.size() ; i++){
            cout<<coordinates[i].second<<" ";
        }
        cout<<endl;
    }
    return 0;
}