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
        ll ans = 1;
        if(n%2==0){
            cout<<n/2<<" "<<n/2<<endl;
        }
        else{
            for(int i=2 ; i*i<=n ; i++){
                if(n%i==0){
                    ans = n/i;
                    break;
                }
            }
            cout<<ans<<" "<<n-ans<<endl;
        }
    }
    return 0;
}