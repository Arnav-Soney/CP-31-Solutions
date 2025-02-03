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
        cin >> n;
        vector<ll> arr(n);
        fr(0,n) cin>>arr[i];
        ll operations = 0;
        bool possible = true;

        for (int i = n - 1; i > 0; i--) {
            while (arr[i - 1] >= arr[i]) {
                arr[i - 1] /= 2;
                operations++;
                // If arr[i-1] becomes 0 and it's still >= arr[i], it's impossible
                if (arr[i - 1] == 0 && arr[i - 1] >= arr[i]) {
                    possible = false;
                    break;
                }
            }
            if (!possible) break;
        }

        if (!possible) {
            cout << -1 << endl;
        } else {
            cout << operations << endl;
        }
    }
    return 0;
}