/*Cho mảng A[] gồm n số được thiết lập theo nguyên tắc nửa đầu tăng dần nửa sau giảm dần. Hãy tìm số lớn nhất của mảng. Ví dụ với mảng A[] = {1, 2, 3, 4, 5, 2, 1}, ta có kết quả 5.*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        long long a[n+1];
        for(long long i=0;i<n;i++) cin>>a[i];
        int max=a[0];
        for(long long i=1;i<n;i++){
            if(a[i]>max) max=a[i];
        }
        cout<<max<<endl;
    }
    return 0;
}