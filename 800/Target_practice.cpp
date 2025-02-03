#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        vector<vector<char>> arr(10,vector<char>(10));
        for(int i=0 ; i<10 ; i++){
            for(int j=0 ; j<10 ; j++){
                cin>>arr[i][j];
            }
        }
        int ans = 0;
        for(int i=0 ; i<10 ; i++){
            for(int j=0 ; j<10 ; j++){
                if(arr[i][j]=='X'){
                    if((i==0 && 0<=j<=9) || (i==9 && 0<=j<=9) || (j==0 && 0<=i<=9) || (j==9 && 0<=i<=9)){
                        ans += 1;
                    }
                    else if((i==1 && 1<=j<=8) || (i==8 && 1<=j<=8) || (j==1 && 1<=i<=8) || (j==8 && 1<=i<=8)){
                        ans += 2;
                    }
                    else if((i==2 && 2<=j<=7) || (i==7 && 2<=j<=7) || (j==2 && 2<=i<=7) || (j==7 && 2<=i<=7)){
                        ans += 3;
                    }
                    else if((i==3 && 3<=j<=6) || (i==6 && 3<=j<=6) || (j==3 && 3<=i<=6) || (j==6 && 3<=i<=6)){
                        ans += 4;
                    }
                    else{
                        ans += 5;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}