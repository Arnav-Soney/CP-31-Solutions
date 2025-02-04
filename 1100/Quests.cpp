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
        vi a(n), b(n);
        fr(0,n) cin >> a[i];
        fr(0,n) cin >> b[i];
        vi mx, prefixSum;
        if(n<=k) {
            mx.resize(n);
            prefixSum.resize(n);
        }
        else{
            mx.resize(k);
            prefixSum.resize(k);
        }
        mx[0] = b[0], prefixSum[0] = a[0];
        for(int i=1 ; i<min(k,n) ; i++){
            mx[i] = max(mx[i-1], b[i]);
        }
        int rem = k-1, pos = 0;
        for(int i=1 ; i<prefixSum.size() ; i++){
            prefixSum[i] = a[i]+ prefixSum[i-1];
        }
        while(pos<min(n,k) && rem>0){
            int temp = prefixSum[pos]+rem*mx[pos];
            sum = max(sum, temp);
            pos++;
            rem--;
        }
        sum = max(prefixSum[min(n,k)-1],sum);
        cout<<sum<<endl;
    }
    return 0;
}