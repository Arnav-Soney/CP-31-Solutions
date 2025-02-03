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
    ll t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vi arr(n);
        fr(0,n) cin>>arr[i];
        fr(0,n){
            arr[i]+=1;
        }
        fr(1,n){
            if(arr[i]%arr[i-1]==0){
                arr[i]+=1;
            }
        }
        fr(0,n) cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}