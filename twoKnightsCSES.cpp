#include <bits/stdc++.h>

using namespace std;

long choose2(int n);
int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        cout << choose2(i) - (4*(i-1)*(i-2))  << "\n";
    }
    return 0;
}

long choose2(int k){
    long n = k*k;
    return n*(n-1)/2;
}


