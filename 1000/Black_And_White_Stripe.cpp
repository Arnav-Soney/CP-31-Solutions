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
    ll t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        string s;
        cin>>s;
        ll cnt = 0, mn = LONG_LONG_MAX;
        for(int i=0 ; i<k ; i++){
            if(s[i]=='B') cnt++;
        }
        mn = min(mn,k-cnt);
        if(mn<=0){
            cout<<0<<endl;
            continue;
        }
        for(int i=1 ; i<n-k+1 ; i++){
            if(mn<=0){
                mn = 0;
                break;
            }
            if(s[i-1]=='B') cnt--;
            if(s[i+k-1]=='B') cnt++;
            mn = min(mn,k-cnt);
        }
        cout<<mn<<endl;
    }
    return 0;
}