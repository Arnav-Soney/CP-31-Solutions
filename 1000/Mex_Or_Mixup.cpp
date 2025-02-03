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

vll arr(300001);

void fillXOR(){
    arr[0] = 0;
    for(ll i=1 ; i<300001 ; i++){
        arr[i] = arr[i-1]^i;
    }
    return;
}

int main(){
    fast_io;
    ll t, a, b;
    cin >> t;
    fillXOR();
    while(t--){
        cin >> a >> b;
        ll len = a,XOR = arr[a-1];
        if(XOR!=b){
            len++;
            if((XOR^a)==b) len++;
        }
        cout<<len<<endl;
    }
    return 0;
}