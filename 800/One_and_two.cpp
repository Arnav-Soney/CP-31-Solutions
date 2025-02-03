#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int* arr = new int[n];
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
        int no_of_two = 0;
        for(int i=0 ; i<n ; i++){
            if(arr[i]==2) no_of_two++;
        }
        int left = 0;
        int right = no_of_two;
        for(int i=0 ; i<n ; i++){
            if(arr[i]==2){
                left += 1;
                right -=1;
            }
            if(left==right){
                cout<<i+1<<endl;
                break;
            }
        }
        if(left!=right) cout<<-1<<endl;
        delete arr;
    }
}