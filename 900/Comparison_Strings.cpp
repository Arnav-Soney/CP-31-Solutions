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
        string s;
        cin>>s;
        ll size=1,mx=INT_MIN;
        fr(0,n-1){
            if(s[i+1]!=s[i]){
                mx = max(mx,size);
                size = 1;
            }
            else{
                size++;
            }
        }
        mx = max(mx,size);
        cout<<mx+1<<endl;
    }
    return 0;
}