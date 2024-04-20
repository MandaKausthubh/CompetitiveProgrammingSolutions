#include<bits/stdc++.h>
#include <cstdint>
using namespace std;

#define int long long

int32_t main(void) {
    int T; cin >> T;
    while(T--) {
        int n, k; cin >> n >> k;
        if(k != 1 &&  k != n) {cout << "-1\n";}
        else if(k == 1) {
            for(int i = 1; i <= n; i++) cout << i << " ";
            cout << endl;
        } else if(k == n) {
            for(int i = 1; i <= n; i++) cout << 1 << " ";
            cout << endl;
        }
    }
    return 0;
}
