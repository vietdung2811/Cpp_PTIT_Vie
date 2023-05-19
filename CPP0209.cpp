/*Cho mảng A[] gồm n phần tử và Q câu hỏi. Mỗi câu hỏi Q là bộ đôi hai số L và R. Nhiệm vụ của bạn là tìm tổng các phần tử của mảng A[] của mỗi câu hỏi Q. Ví dụ với mảng A[] = {1, 1, 2, 1, 3, 4, 5, 2, 8}, các câu hỏi Q: [1, 5], [2, 4], [3, 5] ta sẽ có các câu trả lời : 8 , 4, 6. */
#include<bits/stdc++.h>
using namespace std;

int sum(int a[],int n,int l,int r){
    int s=0;
    for(int i=l;i<=r;i++) s+=a[i];
    return s;
}

int main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        int a[n];
        for (int i=1;i<=n;i++) cin>>a[i];
        while(m--){
            int l,r;cin>>l>>r;
            cout<<sum(a,n,l,r)<<endl;
        }
    }
    return 0;
}