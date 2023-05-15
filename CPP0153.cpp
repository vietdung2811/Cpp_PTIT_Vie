/*Cho hai số nguyên không âm N và K. Nhiệm vụ của bạn là tìm S = 1%K + 2%K + ..+ N%K. Ví dụ với N = 10, K=2 ta có S = 1%2 + 2%2+3%2 + 4%2+5%2+6%2+7%2+8%2+9%2+10%2 = 5. Yêu cầu độ phức tạp thuật toán là hằng số*/
#include <bits/stdc++.h>
using namespace std;

void sol(int n, long long k){
    long long res = 0;
    for(int i = 1; i <= n; i++){
        res += i%k;
    }
    cout << res << endl;    
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; long long k; cin >> n >> k;
        sol(n, k);
    }
    return 0;
}