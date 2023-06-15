/*Cho dãy số A[] chỉ bao gồm các số nguyên dương không quá 1000. Hãy liệt kê các số khác nhau trong dãy theo thứ tự tăng dần. */
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n+1];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n);
    for(int i = 0; i < n; i++){
        if(a[i] != a[i+1]) cout << a[i] << " ";
    }
    return 0;
}