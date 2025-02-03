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
    ll t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        ll n = s.length();
        if(s[0]==s[n-1]) cout<<s<<endl;
        else{
            s[0] = s[n-1];
            cout<<s<<endl;
        }
    }
    return 0;
}