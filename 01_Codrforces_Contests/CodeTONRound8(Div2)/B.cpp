#include <bits/stdc++.h>
#include <cstdint>
#include <vector>
using namespace std;

#define int long long

int32_t main(void) {
    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        vector<int> P(n), A(n);
        // vector<bool> M(n, false);
        for(int &x: A) cin >> x;

        if(A[0] == 1) P[0] = 0;
        else P[0] = -A[0];
        
        // M[P[0]] = true;
        int MEX = (P[0] == 0) ? 1 : 0;

        for(int i = 1; i < n; i++) {
            if(A[i] < 0) {P[i] = MEX - A[i];}
            else if (A[i] == 0) {}
            else {
                P[i] = MEX;
                MEX = P[i] + A[i];
            }
        }

        for(int x: P) cout << x << " ";
        cout << endl;
    }
    return 0;
}
