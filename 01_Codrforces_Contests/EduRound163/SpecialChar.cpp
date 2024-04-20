#include <bits/stdc++.h>
using namespace :: std;

int main(void) {
    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        if((n&1) == 1) {cout << "NO\n";}
        else {
            string S = ""; short x = 1;
            for(int i = 0; i < (n/2); i++) {
                char String1[] = "AAA";
                char String2[] = "BBB";
                if(x == 1) {S += String1; x *= -1;}
                else {S += String2; x *= -1;}
            }
            cout <<"YES\n" << S << endl;
        }
    }
    return 0;
}
