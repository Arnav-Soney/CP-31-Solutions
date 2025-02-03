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
        cin >> n >> m;
        vector<vector<int>> a(n,vector<int>(m));
        int sum = 0,cnt = 0,min_abs_value = INT_MAX;
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++)  cin>>a[i][j];
        }
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if(a[i][j]<=0){
                    cnt++;
                }
                min_abs_value = min(min_abs_value,abs(a[i][j]));
            }
        }
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m; j++){
                sum += abs(a[i][j]);
            }
        }
        if(cnt%2==0) cout<<sum<<endl;
        else cout<<sum-2*min_abs_value<<endl;
    }
    return 0;
}