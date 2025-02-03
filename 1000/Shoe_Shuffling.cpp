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

void solve(vector<ll>& v,int i,int j){
    if(i+j-1>=v.size()) return;
    for(int ind=i+j-2 ; ind>=i ; ind--){
        if(ind+1<v.size()){
            v[ind+1] = v[ind];
        }
    }
    v[i] = i+j;
}

int main(){
    fast_io;
    ll t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vll a(n);
        fr(0,n) cin>>a[i];
        if(n==1){
            cout<<-1<<endl;
            continue;
        }
        sort(all(a));
        vector<ll> v(n);
        iota(v.begin(), v.end(), 1);
        int j = 1, k = 0;
        bool flag = true;
        for(int i=0; i<n-1 ; i++){
            if(a[i]==a[i+1]) j++;
            else{
                if(j==1){
                    flag = false;
                    break;
                }
                solve(v,k,j);
                j = 1;
                k = i+1;
            }
        }
        if(j==1) flag = false;
        if(k<n && j>1) solve(v,k,j);
        if(!flag) cout<<-1<<endl;
        else{
            for(int i=0 ; i<n ; i++) cout<<v[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}