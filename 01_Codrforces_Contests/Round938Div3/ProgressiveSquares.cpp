#include<bits/stdc++.h>
#include <cstdint>
using namespace std;
#define int long long 

int32_t main(void) {
    int T; cin >> T;
    while(T--) {

        map<int, int> A;
        int n, c, d, a11 = 0x3f3f3f3f; cin >> n >> c >> d;
        for(int i = 0; i < n*n; i++) {
            int x; cin >> x;
            a11 = min(a11, x);
            if(A.find(x) == A.end())A.insert({x, 1});
            else A[x] ++;
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                int y = a11 + i*c + j*d;
                if(A.find(y) != A.end()) {
                    A[y]--;
                    if(A[y] == 0) {A.erase(y);}
                }
            }
        }

        /*for(auto T: A) {
            cout << T.first << " " << T.second << endl;
        }*/

        if(A.empty()) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
