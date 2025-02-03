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

vi primes(100001, 1);

void fillPrime(){
    primes[0] = 0;
    primes[1] = 0;
    for(ll i = 2 ; i*i<100001 ; i++){
        if(primes[i] == 1){
            for(ll j = i*i ; j<100001 ; j+=i){
                primes[j] = 0;
            }
        }
    }
    return;
}

ll findNextPrime(ll start){
    while(start < 100001 && !primes[start]) 
        start++;
    return start;
}

int main(){
    fast_io;
    ll t, d;
    cin >> t;
    while(t--){
        cin >> d;
        fillPrime();
        ll div1 = findNextPrime(d + 1);
        ll div2 = findNextPrime(div1 + d);
        cout << div1 * div2 << endl;
    }
    return 0;
}