
#include<bits/stdc++.h>
using namespace :: std;

int main(void) {
    int test; cin >> test;
    for(int _ = 0; _ < test; _++) {
        int n; cin >> n;
        string S = "";
        if(n - 53 <= 0) {S += "a"; n--; }// cout << n << " ";}
        else {
            char x = (char)(n - 53 + (int)('a'));
            n -= (n - 52);
            S += x;
            // cout << n << " ";
        }

        if(n - 27 <= 0) {S += "a"; n--; /*cout << n << " ";*/}
        else {
            char x = (char)(n - 27 + (int)('a'));
            S += x;
            n -= (n - 26); // cout << n << " ";
        }

        S += (char)(n + (int)('a') - 1);

        cout << S << "\n";
    }
    return 0;
}
