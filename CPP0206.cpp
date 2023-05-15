/*Cho mảng A[] gồm n phần tử. Hãy tìm phần tử lớn nhất của mảng. Ví dụ với mảng A[] = {7, 10, 4, 3, 20, 15 } ta nhận được kết quả là 20.*/
#include<bits/stdc++.h>
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