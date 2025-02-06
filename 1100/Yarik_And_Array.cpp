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
    ll t, n, m, x, i, j, k, q;
    cin >> t;
    while(t--){
        cin >> n;
        vll a(n);
        fr(0,n) cin >> a[i];
        ll maxSum = INT_MIN, currSum = 0;
        rep(i,0,n-1){
            if((abs(a[i])^abs(a[i+1]))%2==0){
                currSum = max(a[i], currSum+a[i]);
                maxSum = max(currSum, maxSum);
                currSum = 0;
                continue;
            }
            currSum =max(a[i], currSum+a[i]);
            maxSum = max(maxSum, currSum);
        }
        currSum = max(a[n-1], currSum+a[n-1]);
        maxSum = max(maxSum, currSum);
        cout << maxSum << endl;
    }
    return 0;
}