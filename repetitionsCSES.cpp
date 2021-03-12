//#include <bits/stdc++.h>
//using namespace std;
//int main() {
//
//    string seq;
//    cin >> seq;
//
//    char prev = seq[0];
//    int curLen = 1;
//    int maxLen = 1;
//
//    for(int i = 1; i<= seq.length(); i++) {
//        if (seq[i] == prev){
//            curLen++;
//        } else{
//            if(curLen > maxLen) {
//                maxLen = curLen;
//            }
//            curLen = 1;
//        }
//        prev = seq[i];
//    }
//
//    cout << maxLen;
//
//    return 0;
//
//}
