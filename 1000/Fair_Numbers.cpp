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

bool check(ll x,ll org){
    ll digit;
    while(x>0){
        digit = x%10;
        if(digit==0){
            x/=10;
            continue;
        }
        else if (org % digit != 0) {
            return false;
        }
        x /= 10;
    }
    return true;
}

int main(){
    fast_io;
    ll t, n;
    cin >> t;
    while(t--){
        cin >> n;
        ll x = n;
        bool flag = false;
        while(!flag){
            if(check(x,x)){
                flag = true;
                break;
            }
            x++;
        }
        cout<<x<<endl;
    }
    return 0;
}