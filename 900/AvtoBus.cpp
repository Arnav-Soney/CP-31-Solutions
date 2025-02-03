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
    ll t, n, m, x, i, j, k, q;
    cin >> t;
    while(t--){
        cin >> n;
        ll mx,mn;
        if(n%2!=0 || n==2) cout<<-1<<endl;
        else{
            ll x = n/2;
            mx = x/2;
            if(x%3==0) mn = x/3;
            if(x%3==2) mn = (x-2)/3+1;
            if(x%3==1) mn = (x-4)/3+2;
            cout<<mn<<" "<<mx<<endl;
        }
    }
    return 0;
}