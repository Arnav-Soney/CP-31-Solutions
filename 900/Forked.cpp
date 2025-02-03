#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,xk,yk,xq,yq;
        cin>>a>>b;
        cin>>xk>>yk;
        cin>>xq>>yq;
        int delX[8] = {-b,b,-b,b,-a,a,-a,a};
        int delY[8] = {a,a,-a,-a,b,b,-b,-b};
        int ans = 0;
        // for king 
        set<pair<int,int>> king;
        set<pair<int,int>> queen;
        for(int i=0 ; i<8 ; i++){
            int newX = xk+delX[i];
            int newY = yk+delY[i];
            king.insert({newX,newY});
        }
        // for queen
        for(int i=0 ; i<8 ; i++){
            int newX = xq+delX[i];
            int newY = yq+delY[i];
            queen.insert({newX,newY});
        }
        for(auto a:king){
            if(queen.find(a)!=queen.end()){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}