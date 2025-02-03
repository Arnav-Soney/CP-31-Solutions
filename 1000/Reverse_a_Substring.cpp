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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string t = s;
    ll start = -1,end = -1,i = 0,j = n-1;
    sort(t.begin(),t.end());
    if(t==s) cout<<"NO"<<endl;
    else{
        while(i<n){
            if(t[i]!=s[i]){
                start = i;
                break;
            }
            i++;
        }
        while(j>=0){
            if(s[j]==t[start]){
                end = j;
                break;
            }
            j--;
        }
        cout<<"YES"<<endl;
        cout<<start+1<<" "<<end+1<<endl;
    }
    return 0;
}