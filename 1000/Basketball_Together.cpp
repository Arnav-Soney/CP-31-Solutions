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
    ll n, d;
    cin >> n >> d;
    vll a(n);
    fr(0,n) cin>>a[i];
    sort(all(a));
    ll wins = 0, i=0, j=n-1, m=2;
    if (a[0] > d){
        wins = n;  
        cout << wins << endl;
        return 0;
    }   
    while(i<j){
        if(a[j]>d){
            wins++;
            j--;
        }
        else{
            if(a[j]*m > d){
                wins++;
                i++;
                j--;
                m = 2;
                continue;
            }
            else{
                i++;
                m++;
                continue;
            }
        }
    }
    cout<<wins<<endl;
    return 0;
}