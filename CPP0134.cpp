/*Cho số tự nhiên N. Nhiệm vụ của bạn là hãy đưa ra ước số nguyên tố thứ k của N. Đưa ra -1 nếu không tồn tại ước số thứ k của N. Ví dụ N = 225, k =2 ta có kết quả là 3 vì 225 = 3×3×5×5. Với N = 81, k = 5 ta có kết quả -1 vì 81 = 3×3×3×3.*/
#include <bits/stdc++.h>
using namespace std;

void sol(int n, int k){
    int cnt=0;
    while (n!=1){
        int i=2;
        while (n%i!=0) i++;
        n/=i;
        cnt++;
        if (cnt==k){
            cout << i;
            return;
        }
    }
    cout<<"-1";
}

int main(){
    int t; cin>>t;
    while (t--){
        int n,k; cin>>n>>k;
        sol(n,k);
        cout<<endl;
    }
    return 0;
}