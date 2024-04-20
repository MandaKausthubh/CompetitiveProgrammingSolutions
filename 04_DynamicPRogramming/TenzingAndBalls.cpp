#include <algorithm>
#include <bits/stdc++.h>
using namespace :: std;

int main(void) {
    int T; cin >> T;
    while(T--) {
        int N = 200000 + 5;
        int n, a[N], buc[N], dp[N];
        cin >> n;
        dp[0] = 0;
        for(int i = 1; i <= n; i++) buc[i] = 0x3f3f3f3f;
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            dp[i] = min(dp[i-1]+1, buc[a[i]]);
            buc[a[i]] = min(dp[i-1], buc[a[i]]);
        }

        cout << n - dp[n] << '\n';
    }
    return 0;
}
