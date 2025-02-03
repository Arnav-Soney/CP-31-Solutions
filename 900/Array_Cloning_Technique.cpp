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
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
typedef pair<int,int> pii;
int main(){
    fast_io;
    int T;
    cin >> T;
    while (T --> 0) {
        int n;
        cin >> n;
        map<int, int> q;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            ++q[x];
        }
        int am = 0;
        for (auto &[x, y] : q) {
            am = max(am, y);
        }
        int ans = 0;
        while (am < n) {
            int d = min(n - am, am);
            ans += 1 + d;
            am += d;
        }
        cout << ans << '\n';
    }
    return 0;
}