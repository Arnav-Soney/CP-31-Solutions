#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count = 0;
        // Iterate over each digit place starting from 1 up to 1000000
        for (int i = 1; i <= 9; i++) {
            for (int j = 1; j <= 1000000; j *= 10) {
                if (i*j <= n) {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}