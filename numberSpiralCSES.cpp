//#include <bits/stdc++.h>
//
//using namespace std;
//
//long calcIndex(long y, long x);
//
//int main() {
//    int n;
//    cin >> n;
//    long y, x;
//
//    for (int i = 0; i < n; i++){
//        cin >> y;
//        cin >> x;
//        cout << calcIndex(y , x) << "\n";
//    }
//
//}
//
//long calcIndex(long y, long x){
//    if (y >= x){
//        if (y % 2 == 0) {
//            return y * y - (x-1);
//        }
//        else return (y-1) * (y-1) + x;
//    }
//    else {
//        if (x % 2 == 1) {
//            return x * x - (y - 1);
//        }
//        else return ((x-1) * (x-1)) + y;
//    }
//}
