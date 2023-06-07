/*Cho ma trận A[] có N hàng và 3 cột, trong đó các vị trí là các giá trị nhị phân (0 hoặc 1). Hãy đếm xem có bao nhiêu hàng mà số lượng số 1 nhiều hơn số lượng số 0.*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][3];
    int i,j,cnt=0;
    for (i=0;i<n;i++){
        for (j=0;j<3;j++) cin>>a[i][j];
    }
    for (i=0;i<n;i++){
        int cnt0=0,cnt1=0;
        for (j=0;j<3;j++){
            if (a[i][j]==0) cnt0++;
            if (a[i][j]==1) cnt1++;
        }
        if (cnt1>cnt0) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}