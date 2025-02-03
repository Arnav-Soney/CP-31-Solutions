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
        char ch;
        cin >> ch;
        string s;
        cin >> s;
        s += s;
        ll ans = 0,last = -1;
        if(ch=='g'){
            cout<<ans<<endl;
            continue;
        }
        for(int i=s.length() ; i>=0 ; i--){
            if(s[i]=='g'){
                last = i;
                break;
            }
        }
        for(int i=s.length() ; i>=0 ; i--){
            if(s[i]==ch){
                ans = max(ans,last-i);
            }
            if(s[i]=='g'){
                last = i;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}