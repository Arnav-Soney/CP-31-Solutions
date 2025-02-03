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
        cin >> n;
        vll arr(n);
        fr(0,n) cin>>arr[i];
        unordered_map<ll,ll> mp;
        bool flag = false;
        fr(0,n){
            if(mp[arr[i]]==1){
                flag = true;
                break;
            }
            else mp[arr[i]]++;
        }
        if(!flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}