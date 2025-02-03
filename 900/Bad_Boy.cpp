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
        cin >> n >> m;
        cin >> i >> j;
        int x ,y;
        int dist1 = abs(1-i)+abs(1-j);
        int dist2 = abs(n-i)+abs(1-j);
        int dist3 = abs(1-i)+abs(m-j);
        int dist4 = abs(n-i)+abs(m-j);
        int ans = max(dist1,max(dist2,max(dist3,dist4)));
        if(ans==dist1){
            cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
            continue;
        }
        else if(ans==dist2){
            cout<<n<<" "<<1<<" "<<1<<" "<<m<<endl;
            continue;
        }
        else if(ans==dist3){
            cout<<1<<" "<<m<<" "<<n<<" "<<1<<endl;
            continue;
        }
        else if(ans==dist4){
            cout<<n<<" "<<m<<" "<<1<<" "<<1<<endl;
            continue;
        }
    }
    return 0;
}