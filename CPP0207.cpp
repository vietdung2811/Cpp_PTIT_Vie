/*Cho mảng A[] gồm n phần tử và số d. Hãy thực hiện phép quay vòng d phần tử của mảng A[]. Ví dụ với mảng A[] = {1, 2, 3, 4, 5}, d = 2 thì ta có kết quả A[] = {3, 4, 5, 1, 2}.*/
#include <bits/stdc++.h>
using namespace std;

void sol(int a[], int n, int d)
{
    int b[n];
    for (int i = 0; i < n; i++)
        b[i] = a[i];
    for (int i = 0; i < n; i++)
        a[i] = b[(i + d) % n];
}

int main(){
    int t; cin >> t;
    while (t--){
        int n, d; cin >> n >> d;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sol(a, n, d);
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}