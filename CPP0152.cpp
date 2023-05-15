/*Cho hai số nguyên dương a và m. Nhiệm vụ của bạn là tìm x nhỏ nhất trong khoảng [0,m-1] sao cho a * x  ≡ 1( mod m). Ví dụ a = 3, m=11 ta tìm được x = 4 vì 4*3%11=1.*/
#include<bits/stdc++.h>
using namespace std;

void sol(int a, int m){
    for(int i = 0; i < m; i++){
        if((a*i)%m == 1){
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        int a, m; cin >> a >> m;
        sol(a, m);
    }
    return 0;
}