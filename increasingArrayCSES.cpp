//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//
//    // gets rid of first input
//    long long garbage;
//    cin >> garbage;
//
//    // counts how much we have to add
//    long long counter = 0;
//    long long x; // current number
//    cin >> x;
//    long long min = x;  // minimum
//
//    while (cin >> x) {
//        if (x < min) {
//            counter += (min - x);
//        } else if (x > min) {
//            min = x;
//        }
//    }
//
//    cout << counter;
//    return 0;
//
//}
