/*Cho ma trận vuông A[N][N]. Hãy in các phần tử thuộc theo hình con rắn.*/
#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int i,j;
        int a[n][n];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        for (i=0;i<n;i++){
            if (i%2==0){
                for (j=0;j<n;j++) cout<<a[i][j]<<" ";
            }
            if (i%2==1){
                for (j=n-1;j>-1;j--) cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}