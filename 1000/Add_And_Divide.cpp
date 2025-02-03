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
    ll t, n, A , B;
    cin >> t;
    while(t--){
        cin >> A >> B;
        ll minOperations = A + 3; // Initialize with a large value
        for (ll i = max(0LL, 2 - B); i < minOperations; ++i) {
            ll b = B + i;
            ll a = A;
            ll operations = i; // Increment count for adjustments to B
            // Count operations to reduce A to 0 by dividing by b
            while (a > 0) {
                a /= b;
                ++operations;
            }
            // Update minimum operations
            minOperations = min(minOperations, operations);
        }

        cout << minOperations << endl;
    }
    return 0;
}