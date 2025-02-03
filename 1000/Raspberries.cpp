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
    ll t, n, x, i, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        vll arr(n);
        fr(0,n){
            ll x;
            cin>>x;
            arr[i] = x%k;
        }
        sort(arr.begin(),arr.end());
        if(arr[0]==0) cout<<0<<endl;
        else if(k!=4) cout<<k-arr[n-1]<<endl;
        else{
            ll cnt_1=0,cnt_2=0,cnt_3=0;
            fr(0,n){
                if(arr[i]==1) cnt_1++;
                else if(arr[i]==2) cnt_2++;
                else if(arr[i]==3) cnt_3++;
            }
            if(cnt_2>=2) cout<<0<<endl;
            else if(cnt_3>=1 || (cnt_1>=1 && cnt_2>=1)) cout<<1<<endl;
            else if(cnt_1>=2) cout<<2<<endl;
        }
    }
    return 0;
}