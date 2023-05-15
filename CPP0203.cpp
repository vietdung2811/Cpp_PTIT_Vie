/*Cho mảng A[] gồm n số nguyên bao gồm cả số 0. Nhiệm vụ của bạn là tìm số nguyên dương nhỏ nhất không có mặt trong mảng. Ví dụ với mảng A[] = {5, 8, 3, 7, 9, 1}, ta có kết quả là 2.*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n+1];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        int k = 1;
        for(int i = 0; i < n; i++){
            if(a[i] == k) k++;
        }
        cout << k << endl;
    }
    return 0;
}