/*Cho số nguyên dương N. Hãy đưa ra tất cả các số nguyên tố nhỏ hơn hoặc bằng N.*/
#include <bits/stdc++.h>
using namespace std;

int prime[10001];

void sieve(){
    for (int i=0;i<=10000;i++)
        prime[i]=1;
    prime[0]=prime[1]=0;
    for (int i=2;i<=10000;i++){
        if (prime[i]){
            for (int j=i*i;j<=10000;j+=i)
                prime[j]=0;
        }
    }
}

int main(){
    sieve();
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        for (int i=2;i<=n;i++){
            if (prime[i])
                cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}