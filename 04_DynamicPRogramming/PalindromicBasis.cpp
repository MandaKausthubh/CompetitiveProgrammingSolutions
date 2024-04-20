#include <bits/stdc++.h>
#include <vector>
using namespace :: std;

int reverse(int a) {
    int b = 0;
    while(a) {
        b *= 10;
        b += a % 10;
        a /= 10;
    }
    return b;
}

#define N 499
#define M 40001
#define MOD (long long int)(1000000007)

long long int DP[M][N];

int main (void) {
    vector<long long int> Pal;
    
    for(int i = 0; i < M; i++) {
        if(i == reverse(i)) Pal.push_back(i);
    }

    for(int i = 0; i < M; i++) {
        DP[i][0] = 0;
    }

    for(int i = 0; i < N; i++) {
        DP[0][i] = 1;
    }

    // Building DP array:
    for(int i = 1; i < M; i++) {
        DP[i][1] = 1;
        for(int j = 2; j < N; j++) {
            if(i >= Pal[j]) {DP[i][j] = (DP[i][j-1] + DP[i - Pal[j]][j]) % MOD;}
            else DP[i][j] = DP[i][j-1];
        }
    }

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        cout << DP[n][N-1]<< endl;
    }

    return 0;
}
