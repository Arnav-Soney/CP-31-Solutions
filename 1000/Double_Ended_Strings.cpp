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
    ll t, n, m, x, i, j, k, q;
    cin >> t;
    while(t--){
        string s1,s2;
        cin >> s1 >> s2;
        int max_length_subarray = 0;
        unordered_map<string,int> mp1;
        unordered_map<string,int> mp2;
        mp1.clear();
        mp2.clear();
        for(int i=1 ; i<=s1.length() ; i++){
            for(int j=0 ; j<=s1.length()-i ; j++){
                string str = s1.substr(j,i);
                mp1[str]++;
            }
        }
        for(int i=1 ; i<=s2.length() ; i++){
            for(int j=0 ; j<=s2.length()-i ; j++){
                string str = s2.substr(j,i);
                mp2[str]++;
            }
        }
        for(auto &[x,y]:mp1){
            if( mp2.find(x) != mp2.end() ){
                int len = x.length();
                max_length_subarray = max(len,max_length_subarray);
            }
        }
        cout<<s1.length()+s2.length()-2*max_length_subarray<<endl;
        //cout<<s1.length()<<" "<<s2.length()<<" "<<max_length_subarray<<endl;
    }
    return 0;
}