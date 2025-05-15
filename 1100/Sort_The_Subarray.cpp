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
        vll a(n), b(n);
        fr(0, n) cin>>a[i];
        fr(0, n) cin>>b[i];
        int l = 0, r = n-1;
        for(int i=0 ; i<n ; i++){
            if(a[i]!=b[i]){
                l = i;
                break;
            }
        }
        for(int i=n-1 ; i>=0 ; i--){
            if(a[i]!=b[i]){
                r = i;
                break;
            }
        }
        int mini = *min_element(a.begin()+l, a.begin()+r+1);
        int maxi = *max_element(a.begin()+l, a.begin()+r+1);

        while(l>0 && a[l-1]<=mini){
            mini = a[l-1];
            l--;
        }
        while(r<n-1 && a[r+1]>=maxi){
            maxi = a[r+1];
            r++;
        }
        cout<<l+1<<" "<<r+1<<endl;
    }
    return 0;
}