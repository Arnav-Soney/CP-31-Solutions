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
    ll t, n, x;
    cin >> t;
    while(t--){
        cin >> n >> x;
        int s = 0;
        for(int cnt=0 ; cnt<3 ; cnt++){
            vi a(n);
            for(int i=0 ; i<n ; i++) cin>>a[i];
            for(int j=0 ; j<n ; j++){
                if((x | a[j]) != x) break;
                s |= a[j];
            }
        }
        if(s == x) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}