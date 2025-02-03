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
    ll t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string T = "";
        ll n_0 = 0,n_1 = 0,n=s.size();
        fr(0,n){
            if(s[i]-'0'==0) n_0 += 1;
            else n_1 += 1;
        }
        fr(0,n){
            if(s[i]=='0' && n_1 > 0) T+='1',n_1--;
            else if(s[i]=='1' && n_0 > 0) T+='0',n_0--;
            else break;
        }
        cout<<n - T.size()<<endl;
    }
    return 0;
}