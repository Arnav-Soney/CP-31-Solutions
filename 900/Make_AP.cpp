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
    ll t, a, b , c;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        if((a+c)%(2*b)==0 && (a+c)!=0) cout<<"YES"<<endl;
        else if((2*b-c)%a==0 && (2*b-c)>0) cout<<"YES"<<endl;
        else if( (2*b-a)%c==0 && (2*b-a)>0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}