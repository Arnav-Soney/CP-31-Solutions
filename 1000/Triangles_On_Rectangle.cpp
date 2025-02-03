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
    ll t, w, h;
    cin >> t;
    while(t--){
        cin >> w >> h;
        ll ans = 0;
        for(int i=0 ; i<4 ; i++){
            ll k;
            cin >> k;
            vll points(k);
            for(int j=0 ; j<k ; j++) cin >> points[j];
            // i = 0,1 --> horizontal sides
            // i = 2,3 --> vertical sides
            if(i==0 || i==1) ans = max(ans,h*(points[k-1]-points[0]));
            else ans = max(ans,w*(points[k-1]-points[0]));
        }
        cout<<ans<<endl;
    }
    return 0;
}