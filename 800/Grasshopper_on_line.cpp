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
    lli t, n, x;
    cin >> t;
    while(t--){
        cin >> x >> n;
        if(x%2==0){
            if(n%4==0) cout<<x<<endl;
            else if(n%4==1) cout<< x-n<<endl;
            else if(n%4==2) cout<< x+1<<endl;
            else cout<<x+n+1<<endl;
        }
        else{
            if(n%4==0) cout<<x<<endl;
            else if(n%4==1) cout<< x+n<<endl;
            else if(n%4==2) cout<<x-1<<endl;
            else cout<<x-n-1<<endl;
        }
    }
    return 0;
}