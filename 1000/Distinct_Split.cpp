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
        string s;
        cin>>s;
        ll l =1,r = 0,ans;
        vll right(26,0),left(26,0);
        left[s[0]-'a'] += 1;
        for(int i=1 ; i<n ; i++){
            right[s[i]-'a']+=1;
            if(right[s[i]-'a']==1) r++;
        }
        ans = l + r;
        for(int i=1 ; i<n-1 ; i++){
            left[s[i]-'a'] += 1;
            right[s[i]-'a'] -= 1;
            if(left[s[i]-'a'] == 1) l++;
            if(right[s[i]-'a']==0) r--;
            ans = max(ans,l+r);
        }
        cout<<ans<<endl;
    }
    return 0;
}