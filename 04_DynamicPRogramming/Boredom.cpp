#include<bits/stdc++.h>
using namespace std;

#define M 100001
#define int long long int

int32_t Map[M];
int DP[M];

int32_t main(void) {
    int n; cin >> n;
    for(int i = 0; i < M; i++) Map[i] = 0;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        Map[x]++;
    }
    
    // Initializing:
    DP[0] = 0;
    DP[1] = Map[1];
    for(int i = 2; i < M; i++) {
        if(Map[i]) {
            DP[i] = max((i * Map[i]) + DP[i-2], DP[i-1]);
           //  cout << DP[i] << ' ';
        } else {
            DP[i] = DP[i-1];
        }
    }

    cout << DP[M-1] << endl;
    
    return 0;
}
