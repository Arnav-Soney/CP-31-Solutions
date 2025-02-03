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
    ll t, n, k, b, s;
    cin >> t;
    while(t--){
        cin >> n >> k >> b >> s;
        vll arr(n,0);
        arr[0] = b*k;
        s -= b*k;
        if(s<0) cout<<-1<<endl;
        else{
            for(ll i=0 ; i<n ; ++i){
                ll now = min(s,k-1);
                arr[i] += now;
                s -= now;
            }
            if(s>0) cout<<-1<<endl;
            else{
                for(ll i=0 ; i<n ; i++) cout<<arr[i]<<" ";
                cout<<endl;
            }
        }
    }
    return 0;
}