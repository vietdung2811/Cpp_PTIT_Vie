/*Cho mảng A[] gồm n số và số k. Hãy tìm phần tử nhỏ nhất thứ k của mảng. Ví dụ với mảng A[] = {7, 10, 4, 3, 20, 15 }, k=3 ta nhận được số nhỏ nhất thứ k là 7.*/
#include<bits/stdc++.h>
using namespace std;

void sol(int a[], int n, int k){
    sort(a, a + n);
    cout << a[k - 1] << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sol(a, n, k);
    }
    return 0;
}