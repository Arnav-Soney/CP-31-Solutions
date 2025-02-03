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
    ll t,a,b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        ll ans1,ans2,operations=0;
        bool flag = true;
        if(a>=b){
            ans1 = a/b;
            if(a%b!=0) flag = false;        
        }
        else{
            ans1 = b/a;
            if(b%a!=0) flag = false;
        }
        ans2 = ans1;
        while(ans1!=1 && flag){
            if(ans1%2!=0){
                flag = false;
                break;
            }
            ans1 /=2;
        }
        if(!flag) cout<<-1<<endl;
        else{
            while(ans2!=1){
                if(ans2%8==0){
                    ans2 /=8;
                    operations++;
                    continue;
                }
                else if(ans2%4==0){
                    ans2 /=4;
                    operations++;
                    continue;
                }
                else{
                    ans2 /=2;
                    operations++;
                }
            }
            cout<<operations<<endl;
        }
    }
    return 0;
}