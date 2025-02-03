#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        int op = 0;
        cin>>a>>b>>c>>d;
        if(a!=c){
            if(a<c){
                op+=(c-a);
                b += (c-a);
                a = c;
            }
            else if(a>c){
                op += (a-c);
                a = c;
            }
        }
        if(d>=b){
            op += 2*(d-b);
            cout<<op<<endl;
        }
        else if(d<b){
            cout<<-1<<endl;
        }
    }
}