#include<bits/stdc++.h>
#include <cstdint>
#include <vector>
using namespace std;

#define int long long

int32_t main(void) {
    int T; cin >> T;
    while(T--) {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> V(x);
        for(int &y: V) cin >> y;
        sort(V.begin(), V.end());
    }
    return 0;
}
