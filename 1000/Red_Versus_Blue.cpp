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
    ll t, n, r, b;
    cin >> t;
    while(t--){
        cin >> n >> r >> b;
        ll mn = r/(b+1);
        ll rem = r%(b+1);
        vll v(b+1,mn);
        int i = 0;
        while(rem!=0){
            v[i] += 1;
            rem -=1;
            i++;
        }
        string ans = "";
        for(int i=0 ; i<=b ; i++){
            for(int j=0 ; j<v[i] ; j++){
                ans += 'R';
            }
            ans += 'B';
        }
        ans.erase(ans.end()-1);
        cout<<ans<<endl;
    }
    return 0;
}